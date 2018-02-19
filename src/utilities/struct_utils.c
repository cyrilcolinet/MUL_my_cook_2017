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

void destroy_assets(cook_t *cook)
{
	assets_t *tmp = cook->assets;

	while (tmp->next != NULL) {
		sfSprite_destroy(tmp->next->sp);
		sfTexture_destroy(tmp->next->texture);
		free(tmp->next);
		tmp = tmp->next;
	}

	info("All sprite/textures destroyed!");
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