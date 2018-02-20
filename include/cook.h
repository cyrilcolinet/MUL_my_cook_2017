/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** cook functions (header file)
*/

# ifndef COOK_H
# define COOK_H

# include <SFML/Graphics.h>
# include <stdbool.h>
# include <stdlib.h>
# include <unistd.h>

# include "my.h"

// Assets id definition
# define aWaitBg 		(0)
# define aBtnSp		 	(1)

// Struct prototype
struct pos_t;
struct buton_t;
struct texture_t;
struct assets_t;
struct cook_t;

// Debug global variable
bool debug;

// Struct typedef
typedef enum state_e {
		gameWait,
		gameRun,
		gameEnd,
		gamePause
}		state_e;

typedef enum btnType_e {
		btnPlay,
		btnPause,
		btnCredits,
		btnQuit,
		btnOptions,
		btnNull
} 		btnType_e;

typedef struct pos_t {
		int 			x;
		int 			y;
} 		pos_t;

typedef struct texture_t {
		int 			id;
		sfTexture 		*texture;
		sfSprite 		*sp;
} 		texture_t;

typedef struct btnconf_t {
		btnType_e 		type;
		void 			(*onClick)(struct cook_t *, btnType_e);
		void 			(*onHover)(struct cook_t *, btnType_e);
		pos_t 			pos;
		state_e 		state;
		sfSprite 		*sprite;
} 		btnconf_t;

typedef struct button_t {
		btnType_e 		type;
		pos_t 			pos;
		void 			(*onClick)(struct cook_t *, btnType_e);
		void 			(*onHover)(struct cook_t *, btnType_e);
		state_e 		state;
		struct button_t *next;
} 		button_t;

typedef struct assets_t {
		int 			id;
		sfTexture 		*texture;
		sfSprite 		*sp;
		sfIntRect 		rec;
		struct assets_t *next;
} 		assets_t;

typedef struct cook_t {
		sfRenderWindow	*win;
		state_e 		state;
		assets_t 		*assets;
		button_t 		*btn;
}		cook_t;

// cook.c
void 	exit_game(cook_t *cook);
int		cook_game(cook_t *cook);
int 	cook_main(int ac, char **av);

// utilities/args_handling.c
int 	check_arguments(int ac, char **av);

// utilities/struct_utils.c
int 	new_asset(cook_t *cook, texture_t texture);
void 	destroy_assets(cook_t *cook);
cook_t 	*configure_struct(void);

// utilities/debug_utils.c
void 	info(char *msg);
void 	warning(char *msg);

// events/event_manager.c
void 	poll_event(cook_t *cook, sfEvent *event);

// events/mouse_events.c
void 	mouse_button_released(cook_t *cook, sfMouseButtonEvent mouse);

// assets/assets_manager.c
void 	load_buttons(cook_t *cook);
int 	load_assets(cook_t *cook);

// assets/button_manager.c
void 	configure_callback(cook_t *cook, btnconf_t conf);
void 	add_button(cook_t *cook, btnconf_t conf);
button_t *is_button(cook_t *cook, int x, int y);

// assets/setup/wait_buttons.c
void 	setup_play_btn(cook_t *cook);
void 	setup_settings_btn(cook_t *cook);
void 	setup_quit_btn(cook_t *cook);
void 	setup_credits_btn(cook_t *cook);

// assets/sprite_manager.c
sfSprite *get_sprite(cook_t *cook, int id);
sfTexture *get_texture(cook_t *cook, int id);

# endif