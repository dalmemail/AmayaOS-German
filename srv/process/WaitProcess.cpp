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

#include <API/IPCMessage.h>                                                       
#include <Fnx/Process.h> 
#include <Error.h>
#include <Config.h>
#include "ProcessServer.h"
#include "ProcessMessage.h"

void ProcessServer::waitProcessHandler(ProcessMessage *msg)
{
    if (msg->number < MAX_PROCS && msg->number != ANY &&
        procs[msg->number]->command[0])
    {
        procs[msg->from]->waitProcessID = msg->number;
    }
    else {
        msg->result = EINVAL;
        IPCMessage(msg->from, Send, msg, sizeof(*msg));
    }
}
