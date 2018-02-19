/*
** EPITECH PROJECT, 2018
** cook
** File description:
** cook functions
*/

# include "cook.h"

int cook_game(cook_t *cook)
{
	while (sfRenderWindow_isOpen(cook->win)) {

	}

	return (0);
}

int cook_main(int ac, char **av)
{
	int status = check_arguments(ac, av);
	cook_t *cook = NULL;

	if (status != -1)
		return (status);

	cook = configure_struct();

	if (cook == NULL)
		return (84);

	status = cook_game(cook);
	free(cook);

	return (status);
}