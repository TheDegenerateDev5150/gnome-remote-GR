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

#ifndef GRD_LOCAL_BUFFER_WRAPPER_RDP_H
#define GRD_LOCAL_BUFFER_WRAPPER_RDP_H

#include "grd-local-buffer.h"
#include "grd-types.h"

#define GRD_TYPE_LOCAL_BUFFER_WRAPPER_RDP (grd_local_buffer_wrapper_rdp_get_type ())
G_DECLARE_FINAL_TYPE (GrdLocalBufferWrapperRdp, grd_local_buffer_wrapper_rdp,
                      GRD, LOCAL_BUFFER_WRAPPER_RDP, GrdLocalBuffer)

GrdLocalBufferWrapperRdp *grd_local_buffer_wrapper_rdp_new (void);

void grd_local_buffer_wrapper_rdp_attach_rdp_buffer (GrdLocalBufferWrapperRdp *buffer_wrapper,
                                                     GrdRdpBuffer             *rdp_buffer);

#endif /* GRD_LOCAL_BUFFER_WRAPPER_RDP_H */
