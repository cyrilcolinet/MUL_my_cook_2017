/*
** EPITECH PROJECT, 2018
** cook
** File description:
** struct_utils functions
*/

# include "cook.h"

int new_asset(cook_t *cook, texture_t texture)
{
	assets_t *tmp = cook->assets;

	while (tmp != NULL)
		tmp = tmp->next;

	tmp = malloc(sizeof(assets_t));

	if (tmp == NULL)
		return (84);

	tmp->texture = texture.texture;
	tmp->sp = texture.sp;
	tmp->next = NULL;

	return (0);
}

void destroy_assets(cook_t *cook)
{
	assets_t *tmp = cook->assets;

	while (tmp != NULL) {
		sfSprite_destroy(tmp->sp);
		sfTexture_destroy(tmp->texture);
		free(tmp);
		tmp = tmp->next;
	}
}

cook_t *configure_struct(void)
{
	cook_t *cook = malloc(sizeof(cook_t));
	sfVideoMode mode = { 1200, 700, 32 };
	char *title = "My Cook | v0.0.1";

	if (cook == NULL)
		return (NULL);

	cook->state = gameWait;
	cook->win = sfRenderWindow_create(mode, title, sfClose, NULL);
	cook->assets = malloc(sizeof(assets_t));
	cook->btn = malloc(sizeof(button_t));
	sfRenderWindow_setFramerateLimit(cook->win, 60);

	if (cook->assets == NULL || cook->btn == NULL)
		return (NULL);

	cook->assets->next = NULL;
	cook->btn->next = NULL;

	return (cook);
}