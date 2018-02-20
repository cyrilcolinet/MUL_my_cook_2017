/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** credits_btn_callback functions
*/

# include "cook.h"

void btn_credits_click(cook_t *cook)
{
	button_t *tmp = cook->btn;
	sfIntRect rec;

	while (tmp->next != NULL) {
		if (tmp->next->type == btnCredits) {
			rec = tmp->next->rect;
			rec.top += 82 * 2;

			sfSprite_setTextureRect(tmp->next->sprite, rec);
			break;
		}

		tmp = tmp->next;
	}
}

void btn_credits_released(cook_t *cook)
{
	warning("OPEN CREDITS VIEW");
	reset_to_normal_rect(cook);
}

void btn_credits_hover(cook_t *cook)
{
	button_t *tmp = cook->btn;
	sfIntRect rec;

	while (tmp->next != NULL) {
		if (tmp->next->type == btnCredits) {
			rec = tmp->next->rect;
			rec.top += 82;

			sfSprite_setTextureRect(tmp->next->sprite, rec);
			break;
		}

		tmp = tmp->next;
	}
}