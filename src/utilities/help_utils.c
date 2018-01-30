/*
** EPITECH PROJECT, 2018
** Project Name
** File description:
** help_utils functions
*/

# include "cook.h"

void gen_infos(void)
{

}

void gen_description(char **tab)
{
	int i = -1;
	char **args = NULL;

	while (tab[++i]) {
		args = my_strtok(tab[i], '|');

		if (args == NULL)
			return;

		my_putstr("\t");
		my_putstr(args[0]);
		my_putstr("\t");
		my_putstr(args[1]);
		my_putstr("\n");
		my_freetab(args);
	}
}

void gen_usage(char *bin, char *args)
{
	my_putstr("\t");
	my_putstr(bin);
	my_putstr(" ");
	my_putstr(args);
	my_putstr("\n\n");
}

void display_help(char *bin, char **tab, char *args)
{
	gen_infos();
	my_putstr("\nUSAGE:\n\t");
	gen_usage(bin, args);
	my_putstr("DESCRPTION:\n");
	gen_description(tab);
	my_freetab(tab);
}