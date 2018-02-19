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

struct pos_t;
struct buton_t;
struct texture_t;
struct assets_t;
struct cook_t;

bool debug;

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
		btnOptions
} 		btnType_e;

typedef struct pos_t {
		int 			start;
		int 			heigth;
		int 			width;
} 		pos_t;

typedef struct button_t {
		btnType_e 		type;
		pos_t 			pos;
		void 			(*callback)(struct cook_t);
		struct button_t *next;
} 		button_t;

typedef struct texture_t {
		int 			id;
		sfTexture 		*texture;
		sfSprite 		*sp;
} 		texture_t;

typedef struct assets_t {
		int 			id;
		sfTexture 		*texture;
		sfSprite 		*sp;
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

// assets/assets_manager.c
int 	load_assets(cook_t *cook);

// assets/sprite_manager.c
sfSprite *get_sprite(cook_t *cook, int id);

# endif