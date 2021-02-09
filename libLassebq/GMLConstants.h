#pragma once
#include "RValue.h"

extern const int* g_ConstNumb;
extern const char*** g_ConstNames;
extern const RValue** g_ConstValues;

/* AUTOGENERATED BY libLassebq */
#define SCsi(C) (static_cast<signed int>((C))) /* convert double to int for constants*/
/* Macroses that are commented out cause problems in C++, please don't use them, you won't care anyway :/ */
//#define self (-1.0)
//#define other (-2.0)
//#define all (-3.0)
//#define noone (-4.0)
#define global (-5.0)
//#define local (-7.0)
//#define true (1.0)
//#define false (0.0)
#define pi (3.141592741012574)
#define pr_pointlist (1.0)
#define pr_linelist (2.0)
#define pr_linestrip (3.0)
#define pr_trianglelist (4.0)
#define pr_trianglestrip (5.0)
#define pr_trianglefan (6.0)
#define c_aqua (16776960.0)
#define c_black (0.0)
#define c_blue (16711680.0)
#define c_dkgray (4210752.0)
#define c_fuchsia (16711935.0)
#define c_gray (8421504.0)
#define c_green (32768.0)
#define c_lime (65280.0)
#define c_ltgray (12632256.0)
#define c_maroon (128.0)
#define c_navy (8388608.0)
#define c_olive (32896.0)
#define c_purple (8388736.0)
#define c_red (255.0)
#define c_silver (12632256.0)
#define c_teal (8421376.0)
#define c_white (16777215.0)
#define c_yellow (65535.0)
#define c_orange (4235519.0)
#define bm_normal (0.0)
#define bm_add (1.0)
#define bm_max (2.0)
#define bm_subtract (3.0)
#define bm_zero (1.0)
#define bm_one (2.0)
#define bm_src_color (3.0)
#define bm_src_colour (3.0)
#define bm_inv_src_color (4.0)
#define bm_inv_src_colour (4.0)
#define bm_src_alpha (5.0)
#define bm_inv_src_alpha (6.0)
#define bm_dest_alpha (7.0)
#define bm_inv_dest_alpha (8.0)
#define bm_dest_color (9.0)
#define bm_dest_colour (9.0)
#define bm_inv_dest_colour (10.0)
#define bm_src_alpha_sat (11.0)
#define audio_falloff_none (0.0)
#define audio_falloff_inverse_distance (1.0)
#define audio_falloff_inverse_distance_clamped (2.0)
#define audio_falloff_linear_distance (3.0)
#define audio_falloff_linear_distance_clamped (4.0)
#define audio_falloff_exponent_distance (5.0)
#define audio_falloff_exponent_distance_clamped (6.0)
#define audio_old_system (0.0)
#define audio_new_system (1.0)
#define audio_mono (0.0)
#define audio_stereo (1.0)
#define audio_3d (2.0)
#define fa_left (0.0)
#define fa_center (1.0)
#define fa_right (2.0)
#define fa_top (0.0)
#define fa_middle (1.0)
#define fa_bottom (2.0)
#define mb_any (-1.0)
#define mb_none (0.0)
#define mb_left (1.0)
#define mb_right (2.0)
#define mb_middle (3.0)
#define vk_nokey (0.0)
#define vk_anykey (1.0)
#define vk_enter (13.0)
#define vk_return (13.0)
#define vk_shift (16.0)
#define vk_control (17.0)
#define vk_alt (18.0)
#define vk_escape (27.0)
#define vk_space (32.0)
#define vk_backspace (8.0)
#define vk_tab (9.0)
#define vk_pause (19.0)
#define vk_printscreen (44.0)
#define vk_left (37.0)
#define vk_right (39.0)
#define vk_up (38.0)
#define vk_down (40.0)
#define vk_home (36.0)
#define vk_end (35.0)
#define vk_delete (46.0)
#define vk_insert (45.0)
#define vk_pageup (33.0)
#define vk_pagedown (34.0)
#define vk_f1 (112.0)
#define vk_f2 (113.0)
#define vk_f3 (114.0)
#define vk_f4 (115.0)
#define vk_f5 (116.0)
#define vk_f6 (117.0)
#define vk_f7 (118.0)
#define vk_f8 (119.0)
#define vk_f9 (120.0)
#define vk_f10 (121.0)
#define vk_f11 (122.0)
#define vk_f12 (123.0)
#define vk_numpad0 (96.0)
#define vk_numpad1 (97.0)
#define vk_numpad2 (98.0)
#define vk_numpad3 (99.0)
#define vk_numpad4 (100.0)
#define vk_numpad5 (101.0)
#define vk_numpad6 (102.0)
#define vk_numpad7 (103.0)
#define vk_numpad8 (104.0)
#define vk_numpad9 (105.0)
#define vk_divide (111.0)
#define vk_multiply (106.0)
#define vk_subtract (109.0)
#define vk_add (107.0)
#define vk_decimal (110.0)
#define vk_lshift (160.0)
#define vk_lcontrol (162.0)
#define vk_lalt (164.0)
#define vk_rshift (161.0)
#define vk_rcontrol (163.0)
#define vk_ralt (165.0)
#define gp_face1 (32769.0)
#define gp_face2 (32770.0)
#define gp_face3 (32771.0)
#define gp_face4 (32772.0)
#define gp_shoulderl (32773.0)
#define gp_shoulderr (32774.0)
#define gp_shoulderlb (32775.0)
#define gp_shoulderrb (32776.0)
#define gp_select (32777.0)
#define gp_start (32778.0)
#define gp_stickl (32779.0)
#define gp_stickr (32780.0)
#define gp_padu (32781.0)
#define gp_padd (32782.0)
#define gp_padl (32783.0)
#define gp_padr (32784.0)
#define gp_axislh (32785.0)
#define gp_axislv (32786.0)
#define gp_axisrh (32787.0)
#define gp_axisrv (32788.0)
#define ev_create (0.0)
#define ev_destroy (1.0)
#define ev_clean_up (12.0)
#define ev_step (3.0)
#define ev_alarm (2.0)
#define ev_keyboard (5.0)
#define ev_mouse (6.0)
#define ev_collision (4.0)
#define ev_other (7.0)
#define ev_draw (8.0)
#define ev_draw_begin (72)
#define ev_draw_end (73)
#define ev_draw_pre (76)
#define ev_draw_post (77)
#define ev_gui_begin (74)
#define ev_gui_end (75)
#define ev_keypress (9.0)
#define ev_keyrelease (10.0)
#define ev_trigger (11.0)
#define ev_left_button (0.0)
#define ev_right_button (1.0)
#define ev_middle_button (2.0)
#define ev_no_button (3.0)
#define ev_left_press (4.0)
#define ev_right_press (5.0)
#define ev_middle_press (6.0)
#define ev_left_release (7.0)
#define ev_right_release (8.0)
#define ev_middle_release (9.0)
#define ev_mouse_enter (10.0)
#define ev_mouse_leave (11.0)
#define ev_global_press (12.0)
#define ev_global_release (13.0)
#define ev_joystick1_left (16.0)
#define ev_joystick1_right (17.0)
#define ev_joystick1_up (18.0)
#define ev_joystick1_down (19.0)
#define ev_joystick1_button1 (21.0)
#define ev_joystick1_button2 (22.0)
#define ev_joystick1_button3 (23.0)
#define ev_joystick1_button4 (24.0)
#define ev_joystick1_button5 (25.0)
#define ev_joystick1_button6 (26.0)
#define ev_joystick1_button7 (27.0)
#define ev_joystick1_button8 (28.0)
#define ev_joystick2_left (31.0)
#define ev_joystick2_right (32.0)
#define ev_joystick2_up (33.0)
#define ev_joystick2_down (34.0)
#define ev_joystick2_button1 (36.0)
#define ev_joystick2_button2 (37.0)
#define ev_joystick2_button3 (38.0)
#define ev_joystick2_button4 (39.0)
#define ev_joystick2_button5 (40.0)
#define ev_joystick2_button6 (41.0)
#define ev_joystick2_button7 (42.0)
#define ev_joystick2_button8 (43.0)
#define ev_global_left_button (50.0)
#define ev_global_right_button (51.0)
#define ev_global_middle_button (52.0)
#define ev_global_left_press (53.0)
#define ev_global_right_press (54.0)
#define ev_global_middle_press (55.0)
#define ev_global_left_release (56.0)
#define ev_global_right_release (57.0)
#define ev_global_middle_release (58.0)
#define ev_mouse_wheel_up (60.0)
#define ev_mouse_wheel_down (61.0)
#define ev_outside (0.0)
#define ev_boundary (1.0)
#define ev_game_start (2.0)
#define ev_game_end (3.0)
#define ev_room_start (4.0)
#define ev_room_end (5.0)
#define ev_no_more_lives (6.0)
#define ev_animation_end (7.0)
#define ev_end_of_path (8.0)
#define ev_no_more_health (9.0)
#define ev_user0 (10.0)
#define ev_user1 (11.0)
#define ev_user2 (12.0)
#define ev_user3 (13.0)
#define ev_user4 (14.0)
#define ev_user5 (15.0)
#define ev_user6 (16.0)
#define ev_user7 (17.0)
#define ev_user8 (18.0)
#define ev_user9 (19.0)
#define ev_user10 (20.0)
#define ev_user11 (21.0)
#define ev_user12 (22.0)
#define ev_user13 (23.0)
#define ev_user14 (24.0)
#define ev_user15 (25.0)
#define ev_close_button (30.0)
#define ev_step_normal (0.0)
#define ev_step_begin (1.0)
#define ev_step_end (2.0)
#define ev_async (62.0)
#define ev_dialog (63.0)
#define ev_gui (64.0)
#define ev_iap (66.0)
#define ev_cloud (67.0)
#define ev_networking (68.0)
#define ev_steam (69.0)
#define ev_social (70.0)
#define ev_push_notification (71.0)
#define ev_save_load (72.0)
#define ev_audio_recording (73.0)
#define ev_audio_playback (74.0)
#define ev_system_event (75.0)
#define ty_real (0.0)
#define ty_string (1.0)
#define dll_cdecl (0.0)
#define dll_stdcall (1.0)
#define fa_readonly (1.0)
#define fa_hidden (2.0)
#define fa_sysfile (4.0)
#define fa_volumeid (8.0)
#define fa_directory (16.0)
#define fa_archive (32.0)
#define cr_default (0.0)
#define cr_none (-1.0)
#define cr_arrow (-2.0)
#define cr_cross (-3.0)
#define cr_beam (-4.0)
#define cr_size_nesw (-6.0)
#define cr_size_ns (-7.0)
#define cr_size_nwse (-8.0)
#define cr_size_we (-9.0)
#define cr_uparrow (-10.0)
#define cr_hourglass (-11.0)
#define cr_drag (-12.0)
#define cr_nodrop (-13.0)
#define cr_hsplit (-14.0)
#define cr_vsplit (-15.0)
#define cr_multidrag (-16.0)
#define cr_sqlwait (-17.0)
#define cr_no (-18.0)
#define cr_appstart (-19.0)
#define cr_help (-20.0)
#define cr_handpoint (-21.0)
#define cr_size_all (-22.0)
#define pt_shape_pixel (0.0)
#define pt_shape_disk (1.0)
#define pt_shape_square (2.0)
#define pt_shape_line (3.0)
#define pt_shape_star (4.0)
#define pt_shape_circle (5.0)
#define pt_shape_ring (6.0)
#define pt_shape_sphere (7.0)
#define pt_shape_flare (8.0)
#define pt_shape_spark (9.0)
#define pt_shape_explosion (10.0)
#define pt_shape_cloud (11.0)
#define pt_shape_smoke (12.0)
#define pt_shape_snow (13.0)
#define ps_distr_linear (0.0)
#define ps_distr_gaussian (1.0)
#define ps_distr_invgaussian (2.0)
#define ps_shape_rectangle (0.0)
#define ps_shape_ellipse (1.0)
#define ps_shape_diamond (2.0)
#define ps_shape_line (3.0)
#define ps_force_constant (0.0)
#define ps_force_linear (1.0)
#define ps_force_quadratic (2.0)
#define ps_deflect_vertical (0.0)
#define ps_deflect_horizontal (1.0)
#define ps_change_all (0.0)
#define ps_change_shape (1.0)
#define ps_change_motion (2.0)
#define ef_explosion (0.0)
#define ef_ring (1.0)
#define ef_ellipse (2.0)
#define ef_firework (3.0)
#define ef_smoke (4.0)
#define ef_smokeup (5.0)
#define ef_star (6.0)
#define ef_spark (7.0)
#define ef_flare (8.0)
#define ef_cloud (9.0)
#define ef_rain (10.0)
#define ef_snow (11.0)
#define display_landscape (0.0)
#define display_portrait (1.0)
#define display_landscape_flipped (2.0)
#define display_portrait_flipped (3.0)
#define os_unknown (-1.0)
#define os_win32 (0.0)
#define os_windows (0.0)
#define os_macosx (1.0)
#define os_psp (2.0)
#define os_ios (3.0)
#define os_android (4.0)
#define os_symbian (5.0)
#define os_linux (6.0)
#define os_winphone (7.0)
#define os_tizen (8.0)
#define os_win8native (9.0)
#define os_wiiu (10.0)
#define os_3ds (11.0)
#define os_psvita (12.0)
#define os_bb10 (13.0)
#define os_ps4 (14.0)
#define os_xboxone (15.0)
#define os_ps3 (16.0)
#define os_xbox360 (17.0)
#define os_uwp (18.0)
#define os_tvos (20.0)
#define phy_joint_anchor_1_x (0.0)
#define phy_joint_anchor_1_y (1.0)
#define phy_joint_anchor_2_x (2.0)
#define phy_joint_anchor_2_y (3.0)
#define phy_joint_reaction_force_x (4.0)
#define phy_joint_reaction_force_y (5.0)
#define phy_joint_reaction_torque (6.0)
#define phy_joint_angle (8.0)
#define phy_joint_motor_speed (7.0)
#define phy_joint_motor_torque (9.0)
#define phy_joint_max_motor_torque (10.0)
#define phy_joint_translation (11.0)
#define phy_joint_speed (12.0)
#define phy_joint_motor_force (13.0)
#define phy_joint_max_motor_force (14.0)
#define phy_joint_length_1 (15.0)
#define phy_joint_length_2 (16.0)
#define phy_joint_damping_ratio (17.0)
#define phy_joint_frequency (18.0)
#define phy_debug_render_shapes (1.0)
#define phy_debug_render_joints (2.0)
#define phy_debug_render_coms (4.0)
#define phy_debug_render_aabb (8.0)
#define phy_debug_render_obb (16.0)
#define phy_debug_render_core_shapes (32.0)
#define phy_debug_render_collision_pairs (64.0)
#define audio_falloff_none (0.0)
#define audio_falloff_inverse_distance (1.0)
#define audio_falloff_inverse_distance_clamped (2.0)
#define audio_falloff_linear_distance (3.0)
#define audio_falloff_linear_distance_clamped (4.0)
#define audio_falloff_exponent_distance (5.0)
#define audio_falloff_exponent_distance_clamped (6.0)
#define audio_old_system (0.0)
#define audio_new_system (1.0)
#define audio_mono (0.0)
#define audio_stereo (1.0)
#define audio_3d (2.0)
#define matrix_view (0.0)
#define matrix_projection (1.0)
#define matrix_world (2.0)
#define ov_friends (0.0)
#define ov_community (1.0)
#define ov_players (2.0)
#define ov_settings (3.0)
#define ov_gamegroup (4.0)
#define ov_achievements (5.0)
#define lb_sort_none (0.0)
#define lb_sort_ascending (1.0)
#define lb_sort_descending (2.0)
#define lb_disp_none (0.0)
#define lb_disp_numeric (1.0)
#define lb_disp_time_sec (2.0)
#define lb_disp_time_ms (3.0)
#define ugc_result_success (1.0)
#define ugc_filetype_community (0.0)
#define ugc_filetype_microtrans (1.0)
#define ugc_visibility_public (0.0)
#define ugc_visibility_friends_only (1.0)
#define ugc_visibility_private (2.0)
#define ugc_query_RankedByVote (0.0)
#define ugc_query_RankedByPublicationDate (1.0)
#define ugc_query_AcceptedForGameRankedByAcceptanceDate (2.0)
#define ugc_query_RankedByTrend (3.0)
#define ugc_query_FavoritedByFriendsRankedByPublicationDate (4.0)
#define ugc_query_CreatedByFriendsRankedByPublicationDate (5.0)
#define ugc_query_RankedByNumTimesReported (6.0)
#define ugc_query_CreatedByFollowedUsersRankedByPublicationDate (7.0)
#define ugc_query_NotYetRated (8.0)
#define ugc_query_RankedByTotalVotesAsc (9.0)
#define ugc_query_RankedByVotesUp (10.0)
#define ugc_query_RankedByTextSearch (11.0)
#define ugc_sortorder_CreationOrderDesc (0.0)
#define ugc_sortorder_CreationOrderAsc (1.0)
#define ugc_sortorder_TitleAsc (2.0)
#define ugc_sortorder_LastUpdatedDesc (3.0)
#define ugc_sortorder_SubscriptionDateDesc (4.0)
#define ugc_sortorder_VoteScoreDesc (5.0)
#define ugc_sortorder_ForModeration (6.0)
#define ugc_list_Published (0.0)
#define ugc_list_VotedOn (1.0)
#define ugc_list_VotedUp (2.0)
#define ugc_list_VotedDown (3.0)
#define ugc_list_WillVoteLater (4.0)
#define ugc_list_Favorited (5.0)
#define ugc_list_Subscribed (6.0)
#define ugc_list_UsedOrPlayed (7.0)
#define ugc_list_Followed (8.0)
#define ugc_match_Items (0.0)
#define ugc_match_Items_Mtx (1.0)
#define ugc_match_Items_ReadyToUse (2.0)
#define ugc_match_Collections (3.0)
#define ugc_match_Artwork (4.0)
#define ugc_match_Videos (5.0)
#define ugc_match_Screenshots (6.0)
#define ugc_match_AllGuides (7.0)
#define ugc_match_WebGuides (8.0)
#define ugc_match_IntegratedGuides (9.0)
#define ugc_match_UsableInGame (10.0)
#define ugc_match_ControllerBindings (11.0)
#define timezone_local (0.0)
#define timezone_utc (1.0)
#define buffer_fixed (0.0)
#define buffer_grow (1.0)
#define buffer_wrap (2.0)
#define buffer_fast (3.0)
#define buffer_vbuffer (4.0)
#define buffer_u8 (1.0)
#define buffer_s8 (2.0)
#define buffer_u16 (3.0)
#define buffer_s16 (4.0)
#define buffer_u32 (5.0)
#define buffer_s32 (6.0)
#define buffer_f16 (7.0)
#define buffer_f32 (8.0)
#define buffer_f64 (9.0)
#define buffer_bool (10.0)
#define buffer_string (11.0)
#define buffer_u64 (12.0)
#define buffer_text (13.0)
#define buffer_seek_start (0.0)
#define buffer_seek_relative (1.0)
#define buffer_seek_end (2.0)
#define buffer_surface_copy (0.0)
#define os_unknown (-1.0)
#define os_win32 (0.0)
#define os_windows (0.0)
#define os_macosx (1.0)
#define os_psp (2.0)
#define os_ios (3.0)
#define os_android (4.0)
#define os_symbian (5.0)
#define os_linux (6.0)
#define os_winphone (7.0)
#define os_tizen (8.0)
#define os_win8native (9.0)
#define os_wiiu (10.0)
#define os_3ds (11.0)
#define os_psvita (12.0)
#define os_bb10 (13.0)
#define os_ps4 (14.0)
#define os_xboxone (15.0)
#define os_ps3 (16.0)
#define os_xbox360 (17.0)
#define os_uwp (18.0)
#define os_amazon (19.0)
#define os_llvm_win32 (65536.0)
#define os_llvm_macosx (65537.0)
#define os_llvm_psp (65538.0)
#define os_llvm_ios (65539.0)
#define os_llvm_android (65540.0)
#define os_llvm_symbian (65541.0)
#define os_llvm_linux (65542.0)
#define os_llvm_winphone (65543.0)
#define device_ios_unknown (-1.0)
#define device_ios_iphone (0.0)
#define device_ios_iphone_retina (1.0)
#define device_ios_ipad (2.0)
#define device_ios_ipad_retina (3.0)
#define device_ios_iphone5 (4.0)
#define device_emulator (256.0)
#define device_tablet (2.0)
#define browser_not_a_browser (-1.0)
#define browser_unknown (0.0)
#define browser_ie (1.0)
#define browser_firefox (2.0)
#define browser_chrome (3.0)
#define browser_safari (4.0)
#define browser_safari_mobile (5.0)
#define browser_opera (6.0)
#define browser_android_default (7.0)
#define browser_windows_store (8.0)
#define browser_tizen (9.0)
#define browser_ie_mobile (10.0)
#define of_challenge_win (0.0)
#define of_challenge_lose (1.0)
#define of_challenge_tie (2.0)
#define leaderboard_type_number (0.0)
#define leaderboard_type_time_mins_secs (1.0)
#define achievement_our_info (1002.0)
#define achievement_friends_info (1003.0)
#define achievement_leaderboard_info (1004.0)
#define achievement_achievement_info (1005.0)
#define achievement_pic_loaded (1006.0)
#define achievement_challenge_completed (1007.0)
#define achievement_challenge_completed_by_remote (1008.0)
#define achievement_challenge_received (1009.0)
#define achievement_challenge_list_received (1010.0)
#define achievement_challenge_launched (1011.0)
#define achievement_stat_event (1015.0)
#define achievement_filter_all_players (0.0)
#define achievement_filter_friends_only (1.0)
#define achievement_filter_favorites_only (2.0)
#define achievement_filter_friends_alt (3.0)
#define achievement_type_achievement_challenge (0.0)
#define achievement_type_achievement_score (1.0)
#define asset_unknown (-1.0)
#define asset_object (0.0)
#define asset_sprite (1.0)
#define asset_sound (2.0)
#define asset_room (3.0)
#define asset_background (4.0)
#define asset_path (5.0)
#define asset_script (6.0)
#define asset_font (7.0)
#define asset_timeline (8.0)
#define ds_type_map (1.0)
#define ds_type_list (2.0)
#define ds_type_stack (3.0)
#define ds_type_queue (4.0)
#define ds_type_grid (5.0)
#define ds_type_priority (6.0)
#define fb_login_default (0.0)
#define fb_login_fallback_to_webview (1.0)
#define fb_login_no_fallback_to_webview (2.0)
#define fb_login_forcing_webview (3.0)
#define fb_login_use_system_account (4.0)
#define fb_login_forcing_safari (5.0)
/* END OF FILE */
