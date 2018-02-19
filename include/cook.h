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

// cook.c
int 	cook_main(int ac, char **av);

# endif