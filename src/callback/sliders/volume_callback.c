/*
** EPITECH PROJECT, 2018
** my_cook_2017
** File description:
** volume_callback functions
*/

# include "cook.h"

void slider_volume_callback(cook_t *cook, slider_t *slider)
{
	sfVector2i tmp = sfMouse_getPositionRenderWindow(cook->win);
	sfVector2f pos = { ((float)tmp.x), slider->mid_axis };
	float volume = sfSound_getVolume(cook->sound);

	volume = ((pos.x - slider->range.x) * 100);
	volume /= (slider->range.y - slider->range.x);

	if (volume >= 0 && volume <= 100) {
		slider->btn->pos = pos;
		sfSprite_setPosition(slider->btn->sprite, slider->btn->pos);
	}
	printf("volume = %f\n", volume);
}
