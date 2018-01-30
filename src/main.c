/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** Main function
*/

# include "cook.h"

bool help(void)
{
	my_putstr("Je suis l'aide.\n");

	return (true);
}

bool check_args(int ac, char **av)
{
	int i;

	for (i = 0; i < ac; i++) {
		if (my_strequ(av[i], "-h"))
			return (help());
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