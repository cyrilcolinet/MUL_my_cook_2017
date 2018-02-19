/*
** EPITECH PROJECT, 2018
** cook
** File description:
** Main function
*/

# include "cook.h"

int main(int ac, char **av)
{
	int res = 0;

	debug = true;
	info("Debugger enabled. (main.c:14)");
	res = cook_main(ac, av);

	return (res);
}