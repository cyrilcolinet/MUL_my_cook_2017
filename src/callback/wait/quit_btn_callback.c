/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** quit_btn_callback functions
*/

# include "cook.h"

void btn_quit_click(cook_t *cook)
{
	button_t *tmp = cook->btn;
	sfIntRect rec;

	while (tmp->next != NULL) {
		if (tmp->next->type == btnQuit) {
			rec = tmp->next->rect;
			rec.top += 82 * 2;

			sfSprite_setTextureRect(tmp->next->sprite, rec);
			break;
		}

		tmp = tmp->next;
	}
}

void btn_quit_released(cook_t *cook)
{
	sfRenderWindow_close(cook->win);
	reset_to_normal_rect(cook);
}

void btn_quit_hover(cook_t *cook)
{
	button_t *tmp = cook->btn;
	sfIntRect rec;

	while (tmp->next != NULL) {
		if (tmp->next->type == btnQuit) {
			rec = tmp->next->rect;
			rec.top += 82;

			sfSprite_setTextureRect(tmp->next->sprite, rec);
			break;
		}

		tmp = tmp->next;
	}
}