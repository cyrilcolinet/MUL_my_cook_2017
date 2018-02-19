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

	while (tmp != NULL)
		tmp = tmp->next;

	tmp = malloc(sizeof(button_t));

	if (tmp == NULL)
		return;

	tmp->type = type;
	tmp->pos = pos;
	tmp->next = NULL;
}

void configure_callback(cook_t *cook, btnType_e type, void *onClick)
{
	button_t *tmp = cook->btn;

	while (tmp != NULL && tmp->type != type)
		tmp = tmp->next;

	tmp->callback = onClick;
}