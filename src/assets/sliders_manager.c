/*
** EPITECH PROJECT, 2018
** my_cook_2017
** File description:
** sliders_manager functions
*/

# include "cook.h"

void callback_slide(slider_t *slide, slider_t conf)
{
	slide->state = conf.state;
	slide->onSlide = conf.onSlide;
}

void add_slider(cook_t *cook, slider_t conf)
{
	slider_t *tmp = cook->slides;

	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = malloc(sizeof(slider_t));

	if (tmp->next == NULL)
		return;

	tmp->next->type = conf.type;
	tmp->next->range = conf.range;
	tmp->next->mid_axis = conf.mid_axis;
	tmp->next->rect = conf.rect;
	tmp->next->normal_rect = conf.rect;
	tmp->next->sprite = conf.sprite;
	tmp->next->btn = conf.btn;
	tmp->next->next = NULL;

	callback_slide(tmp->next, conf);
}

slider_t *is_slider(cook_t *cook, int x, int y)
{
	slider_t *tmp = cook->slides;
	sfVector2f range;
	sfIntRect rec;

	while (tmp->next != NULL) {
		range = tmp->next->range;
		rec = tmp->next->rect;

		if (cook->state == tmp->next->state) {
			//if ()
		}

		tmp = tmp->next;
	}

	return (NULL);
}
