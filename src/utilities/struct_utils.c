/*
** EPITECH PROJECT, 2018
** cook
** File description:
** struct_utils functions
*/

# include "cook.h"

void destroy_buttons(cook_t *cook)
{
	button_t *tmp = cook->btn;

	while (tmp->next != NULL) {
		sfSprite_destroy(tmp->next->sprite);
		tmp = tmp->next;
	}

	cook->btn = NULL;
	info("All buttons destroyed!");
}

void destroy_assets(cook_t *cook)
{
	assets_t *tmp = cook->assets;

	while (tmp->next != NULL) {
		sfSprite_destroy(tmp->next->sp);
		sfTexture_destroy(tmp->next->texture);
		tmp = tmp->next;
	}

	cook->assets = NULL;
	info("All assets destroyed!");
}

cook_t *configure_struct(void)
{
	cook_t *cook = malloc(sizeof(cook_t));
	sfVideoMode mode = { 1200, 700, 32 };
	char *title = NULL;

	if (cook == NULL)
		return (NULL);
	cook->state = gameWait;
	cook->last_st = gameUnknown;
	title = "My Cook | v0.0.1";
	cook->win = sfRenderWindow_create(mode, title, sfClose, NULL);
	cook->assets = malloc(sizeof(assets_t));
	cook->btn = malloc(sizeof(button_t));
	if (!cook->assets || !cook->btn || !cook->win)
		return (NULL);
	sfRenderWindow_setFramerateLimit(cook->win, 60);
	set_favicon(cook);
	cook->assets->next = NULL;
	cook->btn->next = NULL;

	return (cook);
}