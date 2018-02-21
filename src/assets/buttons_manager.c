/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** buttons_manager funtions
*/

# include "cook.h"

void callback(cook_t *cook, button_t conf)
{
	button_t *tmp = cook->btn;

	while (tmp->next != NULL) {
		if (tmp->next->type == conf.type) {
			tmp->next->state = conf.state;
			tmp->next->onClick = conf.onClick;
			tmp->next->onHover = conf.onHover;
			tmp->next->onStart = conf.onStart;
			break;
		}

		tmp = tmp->next;
	}
}

void add_button(cook_t *cook, button_t conf)
{
	button_t *tmp = cook->btn;

	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = malloc(sizeof(button_t));

	if (tmp->next == NULL)
		return;

	tmp->next->type = conf.type;
	tmp->next->pos = conf.pos;
	tmp->next->rect = conf.rect;
	tmp->next->normal_rect = conf.rect;
	tmp->next->sprite = conf.sprite;
	tmp->next->next = NULL;

	callback(cook, conf);
}

button_t *is_button(cook_t *cook, int x, int y)
{
	button_t *tmp = cook->btn;
	sfVector2f pos;
	sfIntRect rec;

	while (tmp->next != NULL) {
		pos = tmp->next->pos;
		rec = tmp->next->rect;

		if (x >= pos.x && x <= (pos.x + rec.width))
			if (y >= pos.y && y <= (pos.y + rec.height))
				if (cook->state == tmp->next->state)
					return (tmp->next);

		tmp = tmp->next;
	}

	return (NULL);
}

void draw_buttons(cook_t *cook)
{
	button_t *tmp = cook->btn;
	sfSprite *sprite = NULL;

	while (tmp->next != NULL) {
		if (tmp->next->state == cook->state) {
			sprite = tmp->next->sprite;
			sfRenderWindow_drawSprite(cook->win, sprite, NULL);
		}

		tmp = tmp->next;
	}
}

void reset_to_normal_rect(cook_t *cook)
{
	button_t *tmp = cook->btn;
	sfSprite *sprite = NULL;
	sfIntRect rec;

	while (tmp->next != NULL) {
		if (tmp->next->state == cook->state) {
			sprite = tmp->next->sprite;
			rec = tmp->next->normal_rect;
			sfSprite_setTextureRect(sprite, rec);
		}

		tmp = tmp->next;
	}
}