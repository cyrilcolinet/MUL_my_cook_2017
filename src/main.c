/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** Main function
*/

# include "cook.h"

bool help(char *bin)
{
	char *tab[3];

	tab[0] = "[-h]";
	tab[1] = "-h|Afficher la page d'aide (cette page).";
	tab[2] = NULL;

	display_help(bin, tab);

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