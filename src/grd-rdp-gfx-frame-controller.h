/*
 * Copyright (C) 2022 Pascal Nowack
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

#ifndef GRD_RDP_GFX_FRAME_CONTROLLER_H
#define GRD_RDP_GFX_FRAME_CONTROLLER_H

#include <glib-object.h>
#include <stdint.h>

#include "grd-types.h"

#define GRD_TYPE_RDP_GFX_FRAME_CONTROLLER (grd_rdp_gfx_frame_controller_get_type ())
G_DECLARE_FINAL_TYPE (GrdRdpGfxFrameController, grd_rdp_gfx_frame_controller,
                      GRD, RDP_GFX_FRAME_CONTROLLER, GObject)

GrdRdpGfxFrameController *grd_rdp_gfx_frame_controller_new (GrdRdpSurface *rdp_surface);

GrdRdpGfxFramerateLog *grd_rdp_gfx_frame_controller_get_framerate_log (GrdRdpGfxFrameController *frame_controller);

void grd_rdp_gfx_frame_controller_notify_history_changed (GrdRdpGfxFrameController *frame_controller);

void grd_rdp_gfx_frame_controller_unack_frame (GrdRdpGfxFrameController *frame_controller,
                                               uint32_t                  frame_id,
                                               uint32_t                  n_subframes,
                                               int64_t                   enc_time_us);

void grd_rdp_gfx_frame_controller_ack_frame (GrdRdpGfxFrameController *frame_controller,
                                             uint32_t                  frame_id,
                                             int64_t                   ack_time_us);

void grd_rdp_gfx_frame_controller_unack_last_acked_frame (GrdRdpGfxFrameController *frame_controller,
                                                          uint32_t                  frame_id,
                                                          uint32_t                  n_subframes,
                                                          int64_t                   enc_ack_time_us);

void grd_rdp_gfx_frame_controller_clear_all_unacked_frames (GrdRdpGfxFrameController *frame_controller);

void grd_rdp_gfx_frame_controller_notify_new_round_trip_time (GrdRdpGfxFrameController *frame_controller,
                                                              int64_t                   round_trip_time_us);

#endif /* GRD_RDP_GFX_FRAME_CONTROLLER_H */
