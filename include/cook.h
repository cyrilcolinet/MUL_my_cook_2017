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

typedef enum states {
		gameWait, gameRun, gameEnd, gamePause
}		state_e;

typedef struct data {
		sfRenderWindow	*win;
		state_e 		state;
}		cook_t;

// main.c
bool 	help(char *bin);
bool	check_args(int ac, char **av);

// cook.c
void 	exit_game(cook_t *data);
int 	start_game(cook_t *data);
int 	cook_game(void);

// managers/events_manager.c
void 	events_manager(cook_t *data, sfEvent *event);

// utilities/struct_utilities.c
int 	configure_assets(cook_t *data);
cook_t 	*configure_struct(void);

// utilities/state_utils.c
bool 	isGameWait(cook_t *data);
bool 	isGameRun(cook_t *data);
bool 	isGameEnd(cook_t *data);
bool 	isGamePaused(cook_t *data);

// utilities/help_utils.c
void 	gen_infos(void);
void 	gen_description(char **tab);
void 	gen_usage(char *bin, char *args);
void 	display_help(char *bin, char **tab);

# endif