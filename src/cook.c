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
	destroy_assets(cook);
}

int cook_game(cook_t *cook)
{
	sfEvent event;
	int status = load_assets(cook);

	if (status != 0)
		return (status);

	while (sfRenderWindow_isOpen(cook->win)) {
		poll_event(cook, &event);
		sfRenderWindow_clear(cook->win, sfBlack);

		// Pointer sur function
		if (cook->state == gameWait) {

		}
	}

	exit_game(cook);

	return (status);
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