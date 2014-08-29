/*
 * Copyright (C) 2009 Niek Linnenbank
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <DeviceServer.h>
#include "i8250.h"
#include <stdlib.h>
#include <unistd.h>
#include <syslog.h>

struct SerialAddress {
    u16 port;
    u16 irq;
}

uarts[] = {
    { 0x3f8, 4 },
    { 0x2f8, 3 },
    { 0x3e8, 4 },
    { 0x2e8, 3 },
};

int main(int argc, char **argv)
{
    DeviceServer server("serial", CharacterDeviceFile);
    i8250 *dev = ZERO;
    u8 lcr1, lcr2;

    /* Open the logging facilities. */
    openlog("i8250", LOG_PID, LOG_USER);

    /* Attempt to detect available UART's. */
    for (Size i = 0; i < 4; i++) {
        /* Request I/O permissions. */
        ProcessCtl(SELF, AllowIO, uarts[i].port + LINECONTROL);
    
        /* Read line control port. */
        lcr1 = inb (uarts[i].port + LINECONTROL);
        outb(uarts[i].port + LINECONTROL, lcr1 ^ 0xff);
 
        /* And again. */
        lcr2 = inb (uarts[i].port + LINECONTROL) ^ 0xff;
        outb(uarts[i].port + LINECONTROL, lcr1);

        /* Verify we actually wrote it (means there is an UART). */
        if (lcr1 == lcr2) {
            /* Create new instance. */
            dev = new i8250(uarts[i].port, uarts[i].irq);

            /* Add it to the DeviceServer instance. */	  
            server.add(dev);
            server.interrupt(dev, uarts[i].irq);
       
            /* Perform log. */
            syslog(LOG_INFO,"detectado en PORT=%x IRQ=%x",
                            uarts[i].port, uarts[i].irq);
        }
    }
    /*
     * Start serving requests.
     */
    return server.run();
}
