/*
 * Copyright (C) 2021 Pascal Nowack
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

#ifndef GRD_RDP_FRAME_INFO_H
#define GRD_RDP_FRAME_INFO_H

typedef struct _GrdRdpFrameInfo
{
  uint32_t frame_id;
  uint32_t n_subframes;

  int64_t enc_time_us;
  int64_t ack_time_us;
} GrdRdpFrameInfo;

#endif /* GRD_RDP_FRAME_INFO_H */
