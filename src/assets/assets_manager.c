/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** assets_manager functions
*/

# include "cook.h"

int new_asset(cook_t *cook, texture_t texture)
{
	assets_t *tmp = cook->assets;

	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = malloc(sizeof(assets_t));

	if (tmp == NULL)
		return (84);

	tmp->next->texture = texture.texture;
	tmp->next->sp = texture.sp;
	tmp->next->id = texture.id;
	tmp->next->next = NULL;
	info("New texture loaded!");

	return (0);
}

void load_buttons(cook_t *cook)
{
	load_wait_buttons(cook);
	load_credits_buttons(cook);
}

int load_assets(cook_t *cook)
{
	int status = 0;
	texture_t text;

	text.id = aWaitBg;
	text.texture = sfTexture_createFromFile("assets/main_menu.png", NULL);
	text.sp = sfSprite_create();
	sfSprite_setTexture(text.sp, text.texture, sfFalse);
	status = new_asset(cook, text);

	if (status != 0)
		return (status);

	text.id = aBtnSp;
	text.texture = sfTexture_createFromFile("assets/buttons.png", NULL);
	text.sp = sfSprite_create();
	status = new_asset(cook, text);

	text.id = aPauseBg;
	text.texture = sfTexture_createFromFile("assets/pause_menu.png", NULL);
	text.sp = sfSprite_create();
	sfSprite_setTexture(text.sp, text.texture, sfFalse);
	status = new_asset(cook, text);

	text.id = aOptBg;
	text.texture = sfTexture_createFromFile("assets/options_menu.png", NULL);
	text.sp = sfSprite_create();
	sfSprite_setTexture(text.sp, text.texture, sfFalse);
	status = new_asset(cook, text);

	text.id = aCreditsBg;
	text.texture = sfTexture_createFromFile("assets/credits_menu.png", NULL);
	text.sp = sfSprite_create();
	sfSprite_setTexture(text.sp, text.texture, sfFalse);
	status = new_asset(cook, text);

	load_buttons(cook);

	return (status);
}