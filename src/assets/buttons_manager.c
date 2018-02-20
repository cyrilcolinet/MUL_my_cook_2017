/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** buttons_manager funtions
*/

# include "cook.h"

void add_button(btnType_e type, pos_t pos, cook_t *cook)
{
	button_t *tmp = cook->btn;

	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = malloc(sizeof(button_t));

	if (tmp->next == NULL)
		return;

	tmp->next->type = type;
	tmp->next->pos = pos;
	tmp->next->next = NULL;
}

void configure_callback(cook_t *cook, btnType_e type, void *onClick)
{
	button_t *tmp = cook->btn;

	while (tmp->next != NULL)
		if (tmp->next->type != type)
			tmp = tmp->next;

	tmp->next->callback = onClick;
}