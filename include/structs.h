/*
** EPITECH PROJECT, 2018
** my_cook_2017
** File description:
** structs header file
*/

# ifndef STRUCT_COOK_H
# define STRUCT_COOK_H

# include <SFML/Graphics.h>
# include <stdbool.h>
# include <stdlib.h>
# include <unistd.h>

// Struct prototype
struct 	pos_t;
struct 	button_t;
struct 	texture_t;
struct 	assets_t;
struct 	cook_t;

// Debug global variable
bool 	debug;

// Struct typedef
typedef enum state_e {
		gameUnknown,
		gameWait,
		gameRun,
		gameEnd,
		gamePause,
		gameOnSettings,
		gameOnCredits
}		state_e;

typedef enum btnType_e {
		btnPlay,
		btnPause,
		btnCredits,
		btnQuit,
		btnSettings,
		btnReturn,
		btnNull
} 		btnType_e;

typedef struct texture_t {
		int 			id;
		sfTexture 		*texture;
		sfSprite 		*sp;
} 		texture_t;

typedef struct button_t {
		btnType_e 		type;
		sfVector2f		pos;
		void 			(*onClick)(struct cook_t *, struct button_t *);
		void 			(*onHover)(struct cook_t *, struct button_t *);
		void 			(*onStart)(struct cook_t *, struct button_t *);
		state_e 		state;
		sfSprite 		*sprite;
		sfIntRect 		rect;
		sfIntRect 		normal_rect;
		struct button_t *next;
} 		button_t;

typedef struct assets_t {
		int 			id;
		sfTexture 		*texture;
		sfSprite 		*sp;
		sfIntRect 		rec;
		struct assets_t *next;
} 		assets_t;

typedef struct options_t {
		int 			volume;
} 		options_t;

typedef struct cook_t {
		sfRenderWindow	*win;
		state_e 		state;
		state_e 		last_st;
		options_t 		options;
		assets_t 		*assets;
		button_t 		*btn;
}		cook_t;

# endif
