/*
 * Copyright (C) 2025 Pascal Nowack
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
 * 02111-1307, USA.
 */

#ifndef GRD_LOCAL_BUFFER_COPY_H
#define GRD_LOCAL_BUFFER_COPY_H

#include "grd-local-buffer.h"

#define GRD_TYPE_LOCAL_BUFFER_COPY (grd_local_buffer_copy_get_type ())
G_DECLARE_FINAL_TYPE (GrdLocalBufferCopy, grd_local_buffer_copy,
                      GRD, LOCAL_BUFFER_COPY, GrdLocalBuffer)

GrdLocalBufferCopy *grd_local_buffer_copy_new (uint32_t buffer_width,
                                               uint32_t buffer_height);

#endif /* GRD_LOCAL_BUFFER_COPY_H */
