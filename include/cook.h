/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** cook functions (header file)
*/

# ifndef COOK_H
# define COOK_H

# include "my.h"
# include "structs.h"

// Assets id definition
# define aWaitBg 		(0)
# define aBtnSp		 	(1)
# define aPauseBg 		(2)
# define aOptBg 		(3)
# define aCreditsBg 	(4)
# define aOptionsBg		(5)

// cook.c
void 	exit_game(cook_t *cook);
int		cook_game(cook_t *cook);
int 	cook_main(int ac, char **av);

// game/wait/wait_loop.c
void 	wait_loop(cook_t *cook);

// utilities/args_handling.c
int 	check_arguments(int ac, char **av);

// utilities/struct_utils.c
void 	destroy_buttons(cook_t *cook);
void 	destroy_assets(cook_t *cook);
cook_t 	*configure_struct(void);

// utilities/debug_utils.c
void 	info(char *msg);
void 	warning(char *msg);

// utilities/options_manager.c

//utilities/fct_pointers.c
void fct_pointers(cook_t *cook);

// events/events_manager.c
void 	mouse_manager(cook_t *cook, sfEvent *event);
void 	poll_event(cook_t *cook, sfEvent *event);

// events/window_utils.c
void 	set_favicon(cook_t *cook);

// events/mouse_events.c
void 	mouse_button_pressed(cook_t *cook, sfMouseButtonEvent mouse);
void 	mouse_button_released(cook_t *cook, sfMouseButtonEvent mouse);
void 	mouse_moved(cook_t *cook, sfMouseMoveEvent mouse);

// assets/assets_manager.c
int 	new_asset(cook_t *cook, texture_t texture);
void 	load_buttons(cook_t *cook);
int 	load_assets(cook_t *cook);

// assets/button_loader.c
void 	load_wait_buttons(cook_t *cook);
void 	load_credits_buttons(cook_t *cook);
void 	load_settings_buttons(cook_t *cook);

// assets/button_manager.c
void 	callback(cook_t *cook, button_t conf);
void 	add_button(cook_t *cook, button_t conf);
button_t *is_button(cook_t *cook, int x, int y);
void 	draw_buttons(cook_t *cook);
void 	reset_to_normal_rect(cook_t *cook);

// assets/setup/wait_buttons.c
void 	setup_wait_play_btn(cook_t *cook);
void 	setup_wait_settings_btn(cook_t *cook);
void 	setup_wait_quit_btn(cook_t *cook);
void 	setup_wait_credits_btn(cook_t *cook);

// assets/setup/options_buttons.c
void 	setup_return_settings_button(cook_t *cook);

// assets/setup/credits_buttons.c
void 	setup_return_credits_button(cook_t *cook);

// assets/sprite_manager.c
sfSprite *get_sprite(cook_t *cook, int id);
sfTexture *get_texture(cook_t *cook, int id);

// callback/play_btn_callback.c
void 	btn_play_released(cook_t *cook, button_t *btn);

// callback/settings_btn_callback.c
void 	btn_settings_released(cook_t *cook, button_t *btn);

// callback/credits_btn_callback.c
void 	btn_credits_released(cook_t *cook, button_t *btn);

// callback/quit_btn_callback.c
void 	btn_quit_released(cook_t *cook, button_t *btn);

// callback/return_callback.c
void 	btn_return_released(cook_t *cook, button_t *btn);

// callback/default_callback.c
void 	default_hover_callback(cook_t *cook, button_t *btn);
void 	default_click_callback(cook_t *cook, button_t *btn);

// views/credits_view.c
void 	credits_view(cook_t *cook);

// views/options_view.c
void 	options_view(cook_t *cook);

# endif
