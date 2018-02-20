/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** buttons_manager funtions
*/

# include "cook.h"

void configure_callback(cook_t *cook, btnconf_t conf)
{
	button_t *tmp = cook->btn;

	while (tmp->next != NULL)
		if (tmp->next->type != conf.type)
			tmp = tmp->next;

	tmp->next->onClick = conf.onClick;
	tmp->next->onHover = conf.onHover;
}

void add_button(cook_t *cook, btnconf_t conf)
{
	button_t *tmp = cook->btn;

	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = malloc(sizeof(button_t));

	if (tmp->next == NULL)
		return;

	tmp->next->type = conf.type;
	tmp->next->pos = conf.pos;
	tmp->next->next = NULL;
	
	configure_callback(cook, conf);
}