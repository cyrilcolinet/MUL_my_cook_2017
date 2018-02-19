/*
** EPITECH PROJECT, 2018
** cook
** File description:
** cook functions
*/

# include "cook.h"

void exit_game(cook_t *cook)
{
	sfRenderWindow_destroy(cook->win);
}

int cook_game(cook_t *cook)
{
	sfEvent event;

	while (sfRenderWindow_isOpen(cook->win)) {
		poll_event(cook, &event);
		sfRenderWindow_clear(cook->win, sfBlack);
	}

	exit_game(cook);

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