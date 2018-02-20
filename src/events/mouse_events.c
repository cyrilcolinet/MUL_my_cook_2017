/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** mouse_events functions
*/

# include "cook.h"

void mouse_button_released(cook_t *cook, sfMouseButtonEvent mouse)
{
	button_t *btn = is_button(cook, mouse.x, mouse.y);

	if (btn != NULL)
		btn->onClick(cook, btn->type);
}