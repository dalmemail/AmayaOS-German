/*
 * Copyright (C) 2012 Felipe Cabrera
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

#include "Stdout.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

Error Stdout::initialize()
{
    return ESUCCESS;
}

Error Stdout::write(s8 *buffer, Size size, Size offset)
{
    buffer[size] = ZERO;
    int i = open("/dev/tty0", O_RDWR);
    printf("%s", buffer);
    close(i);
    
    return size;
}