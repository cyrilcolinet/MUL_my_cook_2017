/*
** EPITECH PROJECT, 2018
** Project Name
** File description:
** help_utils functions
*/

# include "cook.h"

void gen_infos(void)
{
	my_putstr("Project: MyCook\n");
	my_putstr("Authors: Cyril COLINET, ");
	my_putstr("Baptiste TOUGOURI\n");
	my_putstr("Year: 2017-2018 (Promo 2022)\n");
	my_putstr("Tamalou ? A la bite !\n");
}

void gen_description(char **tab)
{
	int i = 0;
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

void display_help(char *bin, char **tab)
{
	gen_infos();
	my_putstr("\nUSAGE:\n\t");
	gen_usage(bin, tab[0]);
	my_putstr("DESCRPTION:\n");
	gen_description(tab);
}