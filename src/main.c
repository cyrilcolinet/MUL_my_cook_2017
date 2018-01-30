/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** Main function
*/

# include "cook.h"

bool help(char *bin)
{
	char *tmp;
	char *args = "[-h]";

	tmp = "-h|Afficher la page d'aide (cette page).";

	display_help(bin, my_strtok(tmp, '$'), args);

	return (true);
}

bool check_args(int ac, char **av)
{
	int i;

	for (i = 0; i < ac; i++) {
		if (my_strequ(av[i], "-h"))
			return (help(av[0]));
	}

	return (false);
}

int main(int ac, char **av)
{
	int res = 0;

	if (check_args(ac, av))
		return (0);

	res = cook_game();

	return (res);
}