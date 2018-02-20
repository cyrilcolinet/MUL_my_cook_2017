/*
** EPITECH PROJECT, 2018
** cook
** File description:
** events_manager functions
*/

# include "cook.h"

void mouse_manager(cook_t *cook, sfEvent *event)
{
	sfEventType type = event->type;

	if (type == sfEvtMouseButtonReleased) {
		sfMouseButtonEvent mouse = event->mouseButton;

		mouse_button_released(cook, mouse);
	}
}

void poll_event(cook_t *cook, sfEvent *event)
{
	while (sfRenderWindow_pollEvent(cook->win, event)) {
		if (event->type == sfEvtClosed)
			sfRenderWindow_close(cook->win);
		if (sfKeyboard_isKeyPressed(sfKeyEscape))
			sfRenderWindow_close(cook->win);

		mouse_manager(cook, event);
	}
}