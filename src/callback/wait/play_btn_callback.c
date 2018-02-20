/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** play_btn_callback function
*/

# include "cook.h"

void btn_play_click(cook_t *cook)
{
	button_t *tmp = cook->btn;
	sfIntRect rec;

	while (tmp->next != NULL) {
		if (tmp->next->type == btnPlay) {
			rec = tmp->next->rect;
			rec.top += 82 * 2;

			sfSprite_setTextureRect(tmp->next->sprite, rec);
			break;
		}

		tmp = tmp->next;
	}
}

void btn_play_released(cook_t *cook)
{
	warning("ACTION TO START GAME");
	reset_to_normal_rect(cook);
}

void btn_play_hover(cook_t *cook)
{
	button_t *tmp = cook->btn;
	sfIntRect rec;

	while (tmp->next != NULL) {
		if (tmp->next->type == btnPlay) {
			rec = tmp->next->rect;
			rec.top += 82;

			sfSprite_setTextureRect(tmp->next->sprite, rec);
			break;
		}

		tmp = tmp->next;
	}
}