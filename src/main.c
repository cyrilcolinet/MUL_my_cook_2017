/*
** EPITECH PROJECT, 2018
** cook
** File description:
** Main function
*/

# include "cook.h"

int main(int ac, char **av, char **env)
{
	int res;

	if (*env == NULL)
		return (84);
	res = cook_main(ac, av);
	
	return (res);
}
