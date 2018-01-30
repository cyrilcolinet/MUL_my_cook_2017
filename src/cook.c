/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** cook functions
*/

# include "cook.h"

void exit_game(cook_t *data)
{
	free(data);
}

int start_game(cook_t *data)
{
	return (0);
}

int cook_game(void)
{
	int res = 0;
	cook_t *data;

	data = configure();

	if (data == NULL || configure_assets(data))
		return (84);

	res = start_game(data);
	exit_game(data);

	return (res);
}