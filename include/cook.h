/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** cook functions (header file)
*/

# ifndef COOK_H
# define COOK_H

# include "my.h"
# include <stdbool.h>

typedef enum states {
		gameWait, gameRun, gameEnd
}		state_e;

typedef struct data {
		state_e 	state;
}		cook_t;

// main.c
bool 	help(char *bin);
bool	check_args(int ac, char **av);

// cook.c
void 	exit_game(cook_t *data);
int 	start_game(cook_t *data);
int 	cook_game(void);

// struct_utilities.c
int 	configure_assets(cook_t *data);
cook_t 	*configure(void);

// help_utils.c
void 	gen_infos(void);
void 	gen_description(char **tab);
void 	gen_usage(char *bin, char *args);
void 	display_help(char *bin, char **tab);

# endif