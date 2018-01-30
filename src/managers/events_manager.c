/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** events_manager functions
*/

# include "cook.h"

void events_manager(cook_t *data, sfEvent *event)
{
	while (sfRenderWindow_pollEvent(data->win, event)) {
		if (event->type == sfEvtClosed) {
			sfRenderWindow_close(data->win);
		}
	}
}