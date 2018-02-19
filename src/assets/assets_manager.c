/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** assets_manager functions
*/

# include "cook.h"

int load_assets(cook_t *cook)
{
	int status = 0;
	texture_t text;

	text.id = 0;
	text.texture = sfTexture_createFromFile("assets/main_menu.png", NULL);
	text.sp = sfSprite_create();
	sfSprite_setTexture(text.sp, text.texture, sfFalse);
	status = new_asset(cook, text);

	if (status != 0)
		return (status);

	text.id = 1;
	text.texture = sfTexture_createFromFile("assets/buttons.png", NULL);
	text.sp = sfSprite_create();
	sfSprite_setTexture(text.sp, text.texture, sfFalse);
	status = new_asset(cook, text);

	return (status);
}