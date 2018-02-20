/*
** EPITECH PROJECT, 2018
** cook
** File description:
** events_manager functions
*/

# include "cook.h"

void poll_event(cook_t *cook, sfEvent *event)
{
	while (sfRenderWindow_pollEvent(cook->win, event)) {
		if (event->type == sfEvtClosed)
			sfRenderWindow_close(cook->win);
		if (sfKeyboard_isKeyPressed(sfKeyEscape))
			sfRenderWindow_close(cook->win);
	}
}