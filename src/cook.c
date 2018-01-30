/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** cook functions
*/

# include "cook.h"

void exit_game(cook_t *data)
{
	sfRenderWindow_destroy(data->win);
	free(data);
}

int start_game(cook_t *data)
{
	sfEvent event;

	while (sfRenderWindow_isOpen(data->win)) {
		events_manager(data, &event);

		if (isGameWait(data)) {

		} else if (isGameRun(data)) {

		} else if (isGamePaused(data)) {

		} else if (isGameEnd(data)) {

		}

		sfRenderWindow_clear(data->win, sfBlack);
		sfRenderWindow_display(data->win);
	}

	return (0);
}

int cook_game(void)
{
	int 	res = 0;
	cook_t 	*data;

	data = configure_struct();

	if (data == NULL || configure_assets(data))
		return (84);

	res = start_game(data);
	exit_game(data);

	return (res);
}