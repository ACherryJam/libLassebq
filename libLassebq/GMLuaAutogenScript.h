#pragma once
#include "GMLua.h"
void RegisterScripts(lua_State *_pL);

int lua_Script_macros(lua_State *_pL);
int lua_Script_action_end_game(lua_State *_pL);
int lua_Script_action_inherited(lua_State *_pL);
int lua_Script___init_action(lua_State *_pL);
int lua_Script_background_get_height(lua_State *_pL);
int lua_Script_background_get_width(lua_State *_pL);
int lua_Script___init_background(lua_State *_pL);
int lua_Script_draw_set_blend_mode(lua_State *_pL);
int lua_Script_instance_create(lua_State *_pL);
int lua_Script_object_get_depth(lua_State *_pL);
int lua_Script_tile_add(lua_State *_pL);
int lua_Script_tile_exists(lua_State *_pL);
int lua_Script_tile_get_background(lua_State *_pL);
int lua_Script_tile_get_height(lua_State *_pL);
int lua_Script_tile_get_left(lua_State *_pL);
int lua_Script_tile_get_top(lua_State *_pL);
int lua_Script_tile_get_width(lua_State *_pL);
int lua_Script_tile_layer_delete(lua_State *_pL);
int lua_Script_tile_layer_find(lua_State *_pL);
int lua_Script_tile_layer_shift(lua_State *_pL);
int lua_Script_tile_set_scale(lua_State *_pL);
int lua_Script___view_get(lua_State *_pL);
int lua_Script___view_set(lua_State *_pL);
int lua_Script___view_set_internal(lua_State *_pL);
int lua_Script___init_view(lua_State *_pL);
int lua_Script___global_object_depths(lua_State *_pL);
int lua_Script___init_global(lua_State *_pL);
int lua_Script_inside_screen(lua_State *_pL);
int lua_Script_inside_stage(lua_State *_pL);
int lua_Script_inside_screen_point(lua_State *_pL);
int lua_Script_inside_screen_line(lua_State *_pL);
int lua_Script_inside_camera(lua_State *_pL);
int lua_Script_level_y(lua_State *_pL);
int lua_Script_set_level(lua_State *_pL);
int lua_Script_actor_init(lua_State *_pL);
int lua_Script_animation_init(lua_State *_pL);
int lua_Script_begin_animation(lua_State *_pL);
int lua_Script_animation_code(lua_State *_pL);
int lua_Script_player_idle_ground(lua_State *_pL);
int lua_Script_player_moving_ground(lua_State *_pL);
int lua_Script_player_walking(lua_State *_pL);
int lua_Script_player_casual_walking(lua_State *_pL);
int lua_Script_player_casual_walking_old(lua_State *_pL);
int lua_Script_player_walljump(lua_State *_pL);
int lua_Script_player_wallgrab(lua_State *_pL);
int lua_Script_player_crouching(lua_State *_pL);
int lua_Script_player_flying(lua_State *_pL);
int lua_Script_player_air(lua_State *_pL);
int lua_Script_player_bullettime_check(lua_State *_pL);
int lua_Script_player_block_check(lua_State *_pL);
int lua_Script_player_secondary(lua_State *_pL);
int lua_Script_player_cable_control(lua_State *_pL);
int lua_Script_player_electromagnet(lua_State *_pL);
int lua_Script_get_electromagnet_direction(lua_State *_pL);
int lua_Script_player_flamethrower(lua_State *_pL);
int lua_Script_get_flamethrower_direction(lua_State *_pL);
int lua_Script_player_shoot_cable(lua_State *_pL);
int lua_Script_player_throw(lua_State *_pL);
int lua_Script_player_blocking(lua_State *_pL);
int lua_Script_player_attack_check(lua_State *_pL);
int lua_Script_player_attack_check_old(lua_State *_pL);
int lua_Script_player_attack(lua_State *_pL);
int lua_Script_player_doorbreak(lua_State *_pL);
int lua_Script_player_hurtfly(lua_State *_pL);
int lua_Script_player_hurtfall(lua_State *_pL);
int lua_Script_player_hurtground(lua_State *_pL);
int lua_Script_player_recover(lua_State *_pL);
int lua_Script_player_rolling(lua_State *_pL);
int lua_Script_player_airdodge(lua_State *_pL);
int lua_Script_player_swapitem(lua_State *_pL);
int lua_Script_player_quickswap(lua_State *_pL);
int lua_Script_player_dead(lua_State *_pL);
int lua_Script_player_freeze(lua_State *_pL);
int lua_Script_player_bikethrow(lua_State *_pL);
int lua_Script_player_secondary_dragon(lua_State *_pL);
int lua_Script_player_draw_cableholdUI(lua_State *_pL);
int lua_Script_player_analogue_pressed_check(lua_State *_pL);
int lua_Script_player_input(lua_State *_pL);
int lua_Script_player_hurt(lua_State *_pL);
int lua_Script_kill_player(lua_State *_pL);
int lua_Script_slash_hit(lua_State *_pL);
int lua_Script_bullet_hit(lua_State *_pL);
int lua_Script_explosion_hit(lua_State *_pL);
int lua_Script_player_physics(lua_State *_pL);
int lua_Script_player_ragdoll(lua_State *_pL);
int lua_Script_freeze_player(lua_State *_pL);
int lua_Script_draw_player(lua_State *_pL);
int lua_Script_draw_player_slowdown(lua_State *_pL);
int lua_Script_player_animation(lua_State *_pL);
int lua_Script_player_get_throwdirection(lua_State *_pL);
int lua_Script_player_get_attackdirection(lua_State *_pL);
int lua_Script_move_contact_layer_solid(lua_State *_pL);
int lua_Script_move_contact_layer(lua_State *_pL);
int lua_Script_ground_meeting(lua_State *_pL);
int lua_Script_jumpdown_meeting(lua_State *_pL);
int lua_Script_block_meeting(lua_State *_pL);
int lua_Script_floor_check(lua_State *_pL);
int lua_Script_wall_check(lua_State *_pL);
int lua_Script_ceiling_check(lua_State *_pL);
int lua_Script_slope_check(lua_State *_pL);
int lua_Script_ragdoll_physics(lua_State *_pL);
int lua_Script_slope_land_check(lua_State *_pL);
int lua_Script_on_a_slope(lua_State *_pL);
int lua_Script_AI_physics(lua_State *_pL);
int lua_Script_create_node(lua_State *_pL);
int lua_Script_create_link(lua_State *_pL);
int lua_Script_softbody_constraint(lua_State *_pL);
int lua_Script_softbody_constraint_strong(lua_State *_pL);
int lua_Script_momentum_add(lua_State *_pL);
int lua_Script_place_meeting_radius_dir(lua_State *_pL);
int lua_Script_place_meeting_radius(lua_State *_pL);
int lua_Script_create_popuptext(lua_State *_pL);
int lua_Script_check_light_collision(lua_State *_pL);
int lua_Script_check_light_collision_new(lua_State *_pL);
int lua_Script_draw_flashlight(lua_State *_pL);
int lua_Script_timer_to_string(lua_State *_pL);
int lua_Script_play_sound_materialbounce(lua_State *_pL);
int lua_Script_draw_sprite_sway(lua_State *_pL);
int lua_Script_draw_sprite_wavy(lua_State *_pL);
int lua_Script_draw_sprite_wavy_random(lua_State *_pL);
int lua_Script_tile_layer_move_init(lua_State *_pL);
int lua_Script_tile_layer_move(lua_State *_pL);
int lua_Script_draw_vcig(lua_State *_pL);
int lua_Script_draw_minecart(lua_State *_pL);
int lua_Script_draw_rail(lua_State *_pL);
int lua_Script_get_pulse(lua_State *_pL);
int lua_Script_pulse_init(lua_State *_pL);
int lua_Script_draw_rail_bottom(lua_State *_pL);
int lua_Script_draw_laser(lua_State *_pL);
int lua_Script_draw_laser_horizontal(lua_State *_pL);
int lua_Script_draw_line_dotted(lua_State *_pL);
int lua_Script_draw_line_dotted_radius(lua_State *_pL);
int lua_Script_draw_line_dotted_inconsistent(lua_State *_pL);
int lua_Script_dissolve_sprite(lua_State *_pL);
int lua_Script_show_hint(lua_State *_pL);
int lua_Script_create_motion_trail(lua_State *_pL);
int lua_Script_create_motion_trail_bg(lua_State *_pL);
int lua_Script_create_static_trail(lua_State *_pL);
int lua_Script_create_motion_trail_bg_growing(lua_State *_pL);
int lua_Script_tile_bump_map(lua_State *_pL);
int lua_Script_tile_blood_map(lua_State *_pL);
int lua_Script_create_dust(lua_State *_pL);
int lua_Script_create_dust_var(lua_State *_pL);
int lua_Script_create_trail(lua_State *_pL);
int lua_Script_create_fade(lua_State *_pL);
int lua_Script_create_flash(lua_State *_pL);
int lua_Script_create_memory_flash(lua_State *_pL);
int lua_Script_draw_sprite_recolored(lua_State *_pL);
int lua_Script_draw_sprite_recolored_old_2(lua_State *_pL);
int lua_Script_draw_sprite_recolored_debug(lua_State *_pL);
int lua_Script_draw_sprite_recolored_old(lua_State *_pL);
int lua_Script_draw_surface_recolored(lua_State *_pL);
int lua_Script_draw_surface_recolored_old(lua_State *_pL);
int lua_Script_draw_sprite_existing_surface(lua_State *_pL);
int lua_Script_draw_rim_shading_surface(lua_State *_pL);
int lua_Script_draw_rim_shading_surface_unbatched(lua_State *_pL);
int lua_Script_draw_rim_shading_surface_object(lua_State *_pL);
int lua_Script_draw_recolor_init(lua_State *_pL);
int lua_Script_screen_shake_dir(lua_State *_pL);
int lua_Script_screen_shake(lua_State *_pL);
int lua_Script_screen_freeze(lua_State *_pL);
int lua_Script_club_script(lua_State *_pL);
int lua_Script_add_bloodtile(lua_State *_pL);
int lua_Script_draw_bg_parallax(lua_State *_pL);
int lua_Script_draw_sprite_parallax(lua_State *_pL);
int lua_Script_record_me(lua_State *_pL);
int lua_Script_draw_rim_shading(lua_State *_pL);
int lua_Script_draw_sprite_surface(lua_State *_pL);
int lua_Script_draw_beam_fragment(lua_State *_pL);
int lua_Script_draw_lightning(lua_State *_pL);
int lua_Script_fastmerge_col(lua_State *_pL);
int lua_Script_draw_static(lua_State *_pL);
int lua_Script_light_create(lua_State *_pL);
int lua_Script_light_draw(lua_State *_pL);
int lua_Script_flashlight_create(lua_State *_pL);
int lua_Script_flashlight_draw(lua_State *_pL);
int lua_Script_create_spriteswap(lua_State *_pL);
int lua_Script_draw_semicircle(lua_State *_pL);
int lua_Script_init_light_array(lua_State *_pL);
int lua_Script_update_light_array(lua_State *_pL);
int lua_Script_update_light_array_sorted(lua_State *_pL);
int lua_Script_update_light_array_ext(lua_State *_pL);
int lua_Script_draw_shadow(lua_State *_pL);
int lua_Script_init_controls(lua_State *_pL);
int lua_Script_controller_check(lua_State *_pL);
int lua_Script_controller_check_ext(lua_State *_pL);
int lua_Script_controller_check_pressed(lua_State *_pL);
int lua_Script_controller_check_pressed_ext(lua_State *_pL);
int lua_Script_draw_control(lua_State *_pL);
int lua_Script_get_face_button_sprite(lua_State *_pL);
int lua_Script_init_default_controls(lua_State *_pL);
int lua_Script_init_default_controls_options(lua_State *_pL);
int lua_Script_get_input(lua_State *_pL);
int lua_Script_check_controls_valid(lua_State *_pL);
int lua_Script_set_new_input(lua_State *_pL);
int lua_Script_create_player(lua_State *_pL);
int lua_Script_best_respawn(lua_State *_pL);
int lua_Script_best_item_spawn(lua_State *_pL);
int lua_Script_player_exists(lua_State *_pL);
int lua_Script_breathe_init(lua_State *_pL);
int lua_Script_stealth_init(lua_State *_pL);
int lua_Script_ai_add_special_animation(lua_State *_pL);
int lua_Script_AI_init(lua_State *_pL);
int lua_Script_enemy_init_behaviour(lua_State *_pL);
int lua_Script_angle_distance(lua_State *_pL);
int lua_Script_smoke_blocked(lua_State *_pL);
int lua_Script_AI_can_shoot(lua_State *_pL);
int lua_Script_AI_see_player(lua_State *_pL);
int lua_Script_AI_line_of_sight(lua_State *_pL);
int lua_Script_AI_hearing(lua_State *_pL);
int lua_Script_AI_object_in_sight(lua_State *_pL);
int lua_Script_AI_aim(lua_State *_pL);
int lua_Script_AI_move_aimer(lua_State *_pL);
int lua_Script_turret_line_of_sight(lua_State *_pL);
int lua_Script_turret_aim(lua_State *_pL);
int lua_Script_waypoint_compute(lua_State *_pL);
int lua_Script_compute_path_new(lua_State *_pL);
int lua_Script_array_removefirst(lua_State *_pL);
int lua_Script_floor_above(lua_State *_pL);
int lua_Script_floor_below(lua_State *_pL);
int lua_Script_waypoint_compute_OLD(lua_State *_pL);
int lua_Script_compute_path(lua_State *_pL);
int lua_Script_AI_find_waypoint_up(lua_State *_pL);
int lua_Script_AI_find_waypoint_down(lua_State *_pL);
int lua_Script_listen(lua_State *_pL);
int lua_Script_breathe(lua_State *_pL);
int lua_Script_ai_set_hair(lua_State *_pL);
int lua_Script_ai_set_gunpoint(lua_State *_pL);
int lua_Script_create_corpse(lua_State *_pL);
int lua_Script_enemy_hurt(lua_State *_pL);
int lua_Script_ai_aim_overlap(lua_State *_pL);
int lua_Script_ai_shieldcop_vulnerablecheck(lua_State *_pL);
int lua_Script_ai_overlap(lua_State *_pL);
int lua_Script_enemy_special_idle(lua_State *_pL);
int lua_Script_draw_enemy_icons(lua_State *_pL);
int lua_Script_draw_enemy(lua_State *_pL);
int lua_Script_ai_find_soundsource(lua_State *_pL);
int lua_Script_ai_state_control(lua_State *_pL);
int lua_Script_ai_idle_ground(lua_State *_pL);
int lua_Script_ai_idle_walking(lua_State *_pL);
int lua_Script_ai_break_idle(lua_State *_pL);
int lua_Script_ai_update_target(lua_State *_pL);
int lua_Script_ai_check_stairdoor(lua_State *_pL);
int lua_Script_ai_running_actions(lua_State *_pL);
int lua_Script_ai_check_for_trap(lua_State *_pL);
int lua_Script_ai_check_for_flame(lua_State *_pL);
int lua_Script_ai_check_for_edge(lua_State *_pL);
int lua_Script_ai_aim_to_run(lua_State *_pL);
int lua_Script_ai_runstall_to_run(lua_State *_pL);
int lua_Script_ai_open_door(lua_State *_pL);
int lua_Script_menu_step(lua_State *_pL);
int lua_Script_draw_crt_image(lua_State *_pL);
int lua_Script_draw_crt_image_ext(lua_State *_pL);
int lua_Script_draw_crt_surface(lua_State *_pL);
int lua_Script_draw_sprite_distorted(lua_State *_pL);
int lua_Script_draw_sprite_distorted_logo(lua_State *_pL);
int lua_Script_draw_distorted_surface(lua_State *_pL);
int lua_Script_find_next_tape(lua_State *_pL);
int lua_Script_menu_init(lua_State *_pL);
int lua_Script_add_pausemenu_choice(lua_State *_pL);
int lua_Script_init_levelselect_data(lua_State *_pL);
int lua_Script_create_controls_menu(lua_State *_pL);
int lua_Script_set_windowsize(lua_State *_pL);
int lua_Script_titlemenu_add_choice(lua_State *_pL);
int lua_Script_check_katana_unlocked(lua_State *_pL);
int lua_Script_create_roomsfx(lua_State *_pL);
int lua_Script_create_audio_looper(lua_State *_pL);
int lua_Script_play_sound_basic(lua_State *_pL);
int lua_Script_play_sound_ext(lua_State *_pL);
int lua_Script_play_sound_pos(lua_State *_pL);
int lua_Script_play_sound(lua_State *_pL);
int lua_Script_stop_music_sudden(lua_State *_pL);
int lua_Script_draw_itemicon(lua_State *_pL);
int lua_Script_remove_doors(lua_State *_pL);
int lua_Script_restore_doors(lua_State *_pL);
int lua_Script_room_transition(lua_State *_pL);
int lua_Script_room_transition_fade(lua_State *_pL);
int lua_Script_find_next_scene(lua_State *_pL);
int lua_Script_override_control_init(lua_State *_pL);
int lua_Script_override_control_end(lua_State *_pL);
int lua_Script_ds_grid_replace_all(lua_State *_pL);
int lua_Script_update_region(lua_State *_pL);
int lua_Script_interact_binary(lua_State *_pL);
int lua_Script_clear_screen(lua_State *_pL);
int lua_Script_draw_text_outline_ext(lua_State *_pL);
int lua_Script_draw_text_glow_ext(lua_State *_pL);
int lua_Script_draw_fastline_width_col(lua_State *_pL);
int lua_Script_draw_bigcircle(lua_State *_pL);
int lua_Script_draw_fastcircle(lua_State *_pL);
int lua_Script_draw_lightsphere(lua_State *_pL);
int lua_Script_draw_rect_col(lua_State *_pL);
int lua_Script_draw_circleui(lua_State *_pL);
int lua_Script_create_explosion(lua_State *_pL);
int lua_Script_create_smokescreen(lua_State *_pL);
int lua_Script_create_smoke(lua_State *_pL);
int lua_Script_create_cutscene_camera(lua_State *_pL);
int lua_Script_scr_level_complete(lua_State *_pL);
int lua_Script_scr_level_complete_cut(lua_State *_pL);
int lua_Script_is_metal(lua_State *_pL);
int lua_Script_is_attractable(lua_State *_pL);
int lua_Script_is_currently_attracted(lua_State *_pL);
int lua_Script_get_attract_strength(lua_State *_pL);
int lua_Script_compute_attract_strength(lua_State *_pL);
int lua_Script_create_metal_projectile(lua_State *_pL);
int lua_Script_make_vhs_tape(lua_State *_pL);
int lua_Script_pipeline_draw(lua_State *_pL);
int lua_Script_pipeline_grab_sprite_surface(lua_State *_pL);
int lua_Script_pipeline_color_surface(lua_State *_pL);
int lua_Script_pipeline_rim_shading(lua_State *_pL);
int lua_Script_pipeline_draw_to_screen(lua_State *_pL);
int lua_Script_resolve_sound(lua_State *_pL);
int lua_Script_get_sound_vol(lua_State *_pL);
int lua_Script_create_sound(lua_State *_pL);
int lua_Script_wallcam_compute_angle(lua_State *_pL);
int lua_Script_create_sound_floor(lua_State *_pL);
int lua_Script_dialogue_init(lua_State *_pL);
int lua_Script_predictive_line_break_tags(lua_State *_pL);
int lua_Script_predictive_line_break_tags_asian(lua_State *_pL);
int lua_Script_find_next_char(lua_State *_pL);
int lua_Script_create_textbox_auto(lua_State *_pL);
int lua_Script_create_textbox(lua_State *_pL);
int lua_Script_create_textbox_passive(lua_State *_pL);
int lua_Script_create_textbox_passive_auto(lua_State *_pL);
int lua_Script_add_voiceover(lua_State *_pL);
int lua_Script_add_textsfx(lua_State *_pL);
int lua_Script_create_choicebox(lua_State *_pL);
int lua_Script_add_choice(lua_State *_pL);
int lua_Script_seen_state(lua_State *_pL);
int lua_Script_update_seen_states(lua_State *_pL);
int lua_Script_shift_textbox(lua_State *_pL);
int lua_Script_shift_textbox_arrow_horizontal(lua_State *_pL);
int lua_Script_textbox_set_outline_color(lua_State *_pL);
int lua_Script_textbox_explode(lua_State *_pL);
int lua_Script_scr_addChoice(lua_State *_pL);
int lua_Script_scr_addChoice_crossout(lua_State *_pL);
int lua_Script_scr_addInterrupt(lua_State *_pL);
int lua_Script_scr_addInterrupt_norepeat(lua_State *_pL);
int lua_Script_scr_addInterrupt_crossout(lua_State *_pL);
int lua_Script_scr_addChoice_norepeat(lua_State *_pL);
int lua_Script_dialogue_1(lua_State *_pL);
int lua_Script_dialogue_factorysci_toosoon(lua_State *_pL);
int lua_Script_dialogue_factorysci(lua_State *_pL);
int lua_Script_dialogue_factory_v(lua_State *_pL);
int lua_Script_dialogue_factory_v_autokill(lua_State *_pL);
int lua_Script_dialogue_receptionist(lua_State *_pL);
int lua_Script_dialogue_lobby_cop(lua_State *_pL);
int lua_Script_dialogue_receptionist_2(lua_State *_pL);
int lua_Script_dialogue_gangster_1(lua_State *_pL);
int lua_Script_dialogue_penthouse(lua_State *_pL);
int lua_Script_dialogue_club_2_tut1(lua_State *_pL);
int lua_Script_dialogue_club_2_tut2(lua_State *_pL);
int lua_Script_dialogue_club_run(lua_State *_pL);
int lua_Script_dialogue_club_phone(lua_State *_pL);
int lua_Script_dialogue_club_electrohead(lua_State *_pL);
int lua_Script_dialogue_prison_cops(lua_State *_pL);
int lua_Script_dialogue_prison_toiletguy(lua_State *_pL);
int lua_Script_dialogue_prison_call(lua_State *_pL);
int lua_Script_dialogue_prison_call_nochronos(lua_State *_pL);
int lua_Script_dialogue_homeless_vet(lua_State *_pL);
int lua_Script_dialogue_studio_limo_outside(lua_State *_pL);
int lua_Script_dialogue_studio_limo(lua_State *_pL);
int lua_Script_dialogue_haunted_vbreath(lua_State *_pL);
int lua_Script_dialogue_haunted_vbreath_nosword(lua_State *_pL);
int lua_Script_dialogue_studio_vphone(lua_State *_pL);
int lua_Script_dialogue_studio_v1(lua_State *_pL);
int lua_Script_dialogue_studio_v2(lua_State *_pL);
int lua_Script_dialogue_studio_v3(lua_State *_pL);
int lua_Script_dialogue_haunted_elevator(lua_State *_pL);
int lua_Script_dialogue_studio_finale_1(lua_State *_pL);
int lua_Script_dialogue_studio_finale_4(lua_State *_pL);
int lua_Script_dialogue_studio_finale_5(lua_State *_pL);
int lua_Script_dialogue_studio_finale_6(lua_State *_pL);
int lua_Script_dialogue_tied_up(lua_State *_pL);
int lua_Script_dialogue_mansion_outside(lua_State *_pL);
int lua_Script_dialogue_mansion_outside_2(lua_State *_pL);
int lua_Script_dialogue_mansion_kissyface_1(lua_State *_pL);
int lua_Script_dialogue_mansion_kissyface_2(lua_State *_pL);
int lua_Script_dialogue_mansion_v_death(lua_State *_pL);
int lua_Script_dialogue_chinatown_end_cops(lua_State *_pL);
int lua_Script_dialogue_chinatown_end_cops_fire(lua_State *_pL);
int lua_Script_dialogue_chinatown_end_cops_die(lua_State *_pL);
int lua_Script_dialogue_chinatown_end_maskedmen_1(lua_State *_pL);
int lua_Script_dialogue_chinatown_end_maskedmen_2(lua_State *_pL);
int lua_Script_dialogue_chinatown_headhunter_dragon(lua_State *_pL);
int lua_Script_dialogue_chinatown_headhunter_2(lua_State *_pL);
int lua_Script_dialogue_chinatown_cops(lua_State *_pL);
int lua_Script_dialogue_chinatown_bouncer(lua_State *_pL);
int lua_Script_dialogue_chinatown_bouncer_2(lua_State *_pL);
int lua_Script_dialogue_chinatown_roulette_1(lua_State *_pL);
int lua_Script_dialogue_chinatown_passive_cops(lua_State *_pL);
int lua_Script_dialogue_dragon_cops_preentrance(lua_State *_pL);
int lua_Script_dialogue_dragon_entrance(lua_State *_pL);
int lua_Script_dialogue_dragon_fa_yuan(lua_State *_pL);
int lua_Script_dialogue_mysterious_call(lua_State *_pL);
int lua_Script_dialogue_sniper_1(lua_State *_pL);
int lua_Script_dialogue_sniper_2_fail(lua_State *_pL);
int lua_Script_dialogue_sniper_2_success(lua_State *_pL);
int lua_Script_dialogue_sniper_3(lua_State *_pL);
int lua_Script_dialogue_sniper_wave0(lua_State *_pL);
int lua_Script_dialogue_sniper_wave_complete(lua_State *_pL);
int lua_Script_dialogue_sniper_4(lua_State *_pL);
int lua_Script_dialogue_sniper_5(lua_State *_pL);
int lua_Script_dialogue_sniper_6(lua_State *_pL);
int lua_Script_dialogue_sniper_fake_1(lua_State *_pL);
int lua_Script_dialogue_sniper_fake_2(lua_State *_pL);
int lua_Script_dialogue_sniper_fake_3(lua_State *_pL);
int lua_Script_dialogue_sniper_fake_4(lua_State *_pL);
int lua_Script_dialogue_sniper_fake_6(lua_State *_pL);
int lua_Script_dialogue_sniper_fake_7(lua_State *_pL);
int lua_Script_dialogue_sniper_fake_8(lua_State *_pL);
int lua_Script_dialogue_sniper_fake_9(lua_State *_pL);
int lua_Script_dialogue_leon_death(lua_State *_pL);
int lua_Script_dialogue_bunker_receptionist(lua_State *_pL);
int lua_Script_dialogue_bunker_receptionist_oldguy(lua_State *_pL);
int lua_Script_dialogue_bunker_headhunter_1(lua_State *_pL);
int lua_Script_dialogue_bunker_headhunter_2(lua_State *_pL);
int lua_Script_dialogue_bunker_headhunter_dying(lua_State *_pL);
int lua_Script_dialogue_bunker_access_denied(lua_State *_pL);
int lua_Script_dialogue_bunker_end(lua_State *_pL);
int lua_Script_dialogue_headhunter_fight_1(lua_State *_pL);
int lua_Script_dialogue_headhunter_fight_2(lua_State *_pL);
int lua_Script_dialogue_headhunter_fight_3(lua_State *_pL);
int lua_Script_dialogue_govtlab_locked(lua_State *_pL);
int lua_Script_dialogue_girl_hallway_2(lua_State *_pL);
int lua_Script_dialogue_girl_hallway_3(lua_State *_pL);
int lua_Script_dialogue_girl_hallway_4(lua_State *_pL);
int lua_Script_dialogue_girl_hallway_6(lua_State *_pL);
int lua_Script_dialogue_girl_apartment_3_1(lua_State *_pL);
int lua_Script_dialogue_girl_apartment_3_3(lua_State *_pL);
int lua_Script_dialogue_girl_apartment_3_4(lua_State *_pL);
int lua_Script_dialogue_girl_apartment_4_leavemovie(lua_State *_pL);
int lua_Script_dialogue_apartment5_movie_girl(lua_State *_pL);
int lua_Script_dialogue_apartment5_movie_solo(lua_State *_pL);
int lua_Script_dialogue_girl_apartment_7_morning(lua_State *_pL);
int lua_Script_dialogue_girl_apartment_7_morning_2(lua_State *_pL);
int lua_Script_dialogue_girl_apartment_7_afternoon_1(lua_State *_pL);
int lua_Script_dialogue_girl_apartment_7_afternoon_2(lua_State *_pL);
int lua_Script_dialogue_girl_apartment_9_afternoon(lua_State *_pL);
int lua_Script_dialogue_girl_apartment_9_afternoon_rooftop_1(lua_State *_pL);
int lua_Script_dialogue_girl_apartment_9_afternoon_rooftop_2(lua_State *_pL);
int lua_Script_dialogue_girl_apartment_10(lua_State *_pL);
int lua_Script_dialogue_girl_apartment_10_1(lua_State *_pL);
int lua_Script_dialogue_girl_apartment_10_2(lua_State *_pL);
int lua_Script_dialogue_girl_apartment_10_3(lua_State *_pL);
int lua_Script_dialogue_girl_apartment_10_4(lua_State *_pL);
int lua_Script_dialogue_apartment_searchresult_leviathan_fail(lua_State *_pL);
int lua_Script_dialogue_apartment_searchresult_leviathan_failf(lua_State *_pL);
int lua_Script_dialogue_girl_halloween(lua_State *_pL);
int lua_Script_dialogue_girl_candy(lua_State *_pL);
int lua_Script_dialogue_tv_1(lua_State *_pL);
int lua_Script_dialogue_tv_2(lua_State *_pL);
int lua_Script_dialogue_tv_3(lua_State *_pL);
int lua_Script_dialogue_tv_5(lua_State *_pL);
int lua_Script_dialogue_tv_6(lua_State *_pL);
int lua_Script_dialogue_videostore_girl(lua_State *_pL);
int lua_Script_dialogue_bar_0(lua_State *_pL);
int lua_Script_dialogue_bar_1(lua_State *_pL);
int lua_Script_dialogue_bar_2(lua_State *_pL);
int lua_Script_dialogue_bar_3(lua_State *_pL);
int lua_Script_dialogue_jukebox(lua_State *_pL);
int lua_Script_dialogue_hallway_passive(lua_State *_pL);
int lua_Script_dialogue_hallway_police_1(lua_State *_pL);
int lua_Script_dialogue_apartment_note(lua_State *_pL);
int lua_Script_dialogue_hallway_police_2(lua_State *_pL);
int lua_Script_dialogue_hallway_police_3(lua_State *_pL);
int lua_Script_dialogue_snuff_0(lua_State *_pL);
int lua_Script_dialogue_snuff_1(lua_State *_pL);
int lua_Script_dialogue_snuff_2(lua_State *_pL);
int lua_Script_dialogue_snuff_3(lua_State *_pL);
int lua_Script_dialogue_snuff_4(lua_State *_pL);
int lua_Script_dialogue_snuff_5(lua_State *_pL);
int lua_Script_dialogue_ending_walkie(lua_State *_pL);
int lua_Script_dialogue_ending_snow(lua_State *_pL);
int lua_Script_dialogue_nightmare_scientist_gibberish(lua_State *_pL);
int lua_Script_dialogue_nightmare_scientist_gibberish_2(lua_State *_pL);
int lua_Script_dialogue_nightmare_scientist_gibberish_3(lua_State *_pL);
int lua_Script_dialogue_nightmare_scientist_talk(lua_State *_pL);
int lua_Script_dialogue_fullscreen_0(lua_State *_pL);
int lua_Script_dialogue_results_1(lua_State *_pL);
int lua_Script_dialogue_results_1_bad(lua_State *_pL);
int lua_Script_dialogue_results_2_good(lua_State *_pL);
int lua_Script_dialogue_results_2_bad(lua_State *_pL);
int lua_Script_dialogue_results_3_good(lua_State *_pL);
int lua_Script_dialogue_results_3_okay(lua_State *_pL);
int lua_Script_dialogue_results_3_bad(lua_State *_pL);
int lua_Script_dialogue_results_4_good(lua_State *_pL);
int lua_Script_dialogue_results_4_bad(lua_State *_pL);
int lua_Script_dialogue_results_4_nochronos_good(lua_State *_pL);
int lua_Script_dialogue_results_4_nochronos_bad(lua_State *_pL);
int lua_Script_dialogue_results_5(lua_State *_pL);
int lua_Script_dialogue_results_6(lua_State *_pL);
int lua_Script_dialogue_results_7(lua_State *_pL);
int lua_Script_dialogue_results_9(lua_State *_pL);
int lua_Script_dialogue_results_9_2(lua_State *_pL);
int lua_Script_dialogue_results_10(lua_State *_pL);
int lua_Script_dialogue_results_11(lua_State *_pL);
int lua_Script_dialogue_unlocked_lab(lua_State *_pL);
int lua_Script_dialogue_psych_passive(lua_State *_pL);
int lua_Script_dialogue_psych_passive_2(lua_State *_pL);
int lua_Script_dialogue_motel_gangsters(lua_State *_pL);
int lua_Script_dialogue_club_bouncer(lua_State *_pL);
int lua_Script_dialogue_club_bouncerfriend(lua_State *_pL);
int lua_Script_dialogue_club_pipes(lua_State *_pL);
int lua_Script_dialogue_club_skinnyricky(lua_State *_pL);
int lua_Script_dialogue_haunted_robot(lua_State *_pL);
int lua_Script_dialogue_haunted_robot2(lua_State *_pL);
int lua_Script_dialogue_mansion_fall(lua_State *_pL);
int lua_Script_dialogue_mansion_eavesdrop(lua_State *_pL);
int lua_Script_dialogue_notea(lua_State *_pL);
int lua_Script_dialogue_candy(lua_State *_pL);
int lua_Script_dialogue_psych_2(lua_State *_pL);
int lua_Script_dialogue_psych_3(lua_State *_pL);
int lua_Script_dialogue_psych_4(lua_State *_pL);
int lua_Script_dialogue_psych_note(lua_State *_pL);
int lua_Script_dialogue_psych_6_1(lua_State *_pL);
int lua_Script_dialogue_psych_6_2(lua_State *_pL);
int lua_Script_dialogue_psych_6_3(lua_State *_pL);
int lua_Script_dialogue_psych_6_4(lua_State *_pL);
int lua_Script_dialogue_psych_7(lua_State *_pL);
int lua_Script_dialogue_psych_7_2(lua_State *_pL);
int lua_Script_dialogue_psych_7_3(lua_State *_pL);
int lua_Script_dialogue_psych_10(lua_State *_pL);
int lua_Script_dialogue_psych_11(lua_State *_pL);
int lua_Script_dialogue_psych_11_battle(lua_State *_pL);
int lua_Script_dialogue_psych_paper(lua_State *_pL);
int lua_Script_dialogue_psych_desk_rock(lua_State *_pL);
int lua_Script_dialogue_psych_desk_picture(lua_State *_pL);
int lua_Script_dialogue_psych_desk_generic(lua_State *_pL);
int lua_Script_dialogue_psych_desk_annoyed(lua_State *_pL);
int lua_Script_dialogue_psych_desk_angry(lua_State *_pL);
int lua_Script_init_textbox_actors(lua_State *_pL);
int lua_Script_set_actor_talksfx(lua_State *_pL);
int lua_Script_dialogue_maskedmen1(lua_State *_pL);
int lua_Script_dialogue_maskedmen_alleyway(lua_State *_pL);
int lua_Script_dialogue_maskedmen_postcredits(lua_State *_pL);
int lua_Script_switch_saveload_begin(lua_State *_pL);
int lua_Script_switch_save_end(lua_State *_pL);
int lua_Script_cutscene_init(lua_State *_pL);
int lua_Script_cutscene_wait(lua_State *_pL);
int lua_Script_cutscene_move_player(lua_State *_pL);
int lua_Script_create_enemybike_formation(lua_State *_pL);
int lua_Script_create_enemybike_formation_vertical(lua_State *_pL);
int lua_Script_check_bikeslash_collision(lua_State *_pL);
int lua_Script_save_game(lua_State *_pL);
int lua_Script_load_game(lua_State *_pL);
int lua_Script_save_options(lua_State *_pL);
int lua_Script_load_options(lua_State *_pL);
int lua_Script_save_version_number(lua_State *_pL);
int lua_Script_load_version_number(lua_State *_pL);
int lua_Script_save_controls(lua_State *_pL);
int lua_Script_load_controls(lua_State *_pL);
int lua_Script_save_current_speedrun(lua_State *_pL);
int lua_Script_load_current_speedrun(lua_State *_pL);
int lua_Script_save_speedrun_options(lua_State *_pL);
int lua_Script_load_speedrun_options(lua_State *_pL);
int lua_Script_save_achievements(lua_State *_pL);
int lua_Script_load_achievements(lua_State *_pL);
int lua_Script_save_variable(lua_State *_pL);
int lua_Script_save_variable_rounded(lua_State *_pL);
int lua_Script_load_variable(lua_State *_pL);
int lua_Script_load_variable_rounded(lua_State *_pL);
int lua_Script_load_variable_string(lua_State *_pL);
int lua_Script_generate_hash(lua_State *_pL);
int lua_Script_get_line_text(lua_State *_pL);
int lua_Script_get_line_textbox_width(lua_State *_pL);
int lua_Script_get_choice_text(lua_State *_pL);
int lua_Script_get_misc_text(lua_State *_pL);
int lua_Script_init_lines(lua_State *_pL);
int lua_Script_init_misc_text(lua_State *_pL);
int lua_Script_init_option_translations(lua_State *_pL);
int lua_Script_translate_option(lua_State *_pL);
int lua_Script_draw_set_font_localized(lua_State *_pL);
int lua_Script_draw_set_font_override(lua_State *_pL);
int lua_Script_draw_text_scaled(lua_State *_pL);
int lua_Script_draw_text_scaled_outline_ext(lua_State *_pL);
int lua_Script_draw_text_scaled_color(lua_State *_pL);
int lua_Script_draw_text_scaled_colour(lua_State *_pL);
int lua_Script_draw_text_scaled_transformed(lua_State *_pL);
int lua_Script_draw_text_scaled_ext_transformed(lua_State *_pL);
int lua_Script_draw_text_scaled_transformed_colour(lua_State *_pL);
int lua_Script_draw_text_scaled_transformed_color(lua_State *_pL);
int lua_Script_draw_text_scaled_glow_ext(lua_State *_pL);
int lua_Script_trigger_steam_achievement(lua_State *_pL);
int lua_Script_draw_speedrun_timer(lua_State *_pL);
int lua_Script_char_to_milli(lua_State *_pL);
int lua_Script_get_random(lua_State *_pL);
int lua_Script_choose_random(lua_State *_pL);
