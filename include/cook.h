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

// main.c
bool 	help(void);
bool	check_args(int ac, char **av);

// cook.c
int 	cook_game(void);

# endif