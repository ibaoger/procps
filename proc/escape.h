/*
 * escape.h - printing handling
 * Copyright 1998-2002 by Albert Cahalan
 * Copyright 2020-2022 Jim Warner <james.warner@comcast.net>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#ifndef PROCPS_PROC_ESCAPE_H
#define PROCPS_PROC_ESCAPE_H

#include "readproc.h"

#define ESC_BRACKETS 0x2  // if using cmd, put '[' and ']' around it
#define ESC_DEFUNCT  0x4  // mark zombies with " <defunct>"

int escape_command (unsigned char *outbuf, const proc_t *pp, int bytes, unsigned flags);

int escape_str (unsigned char *dst, const unsigned char *src, int bufsize);

#endif
