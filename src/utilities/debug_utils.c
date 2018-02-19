/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** deug_utils functions
*/

# include "cook.h"

void info(char *msg)
{
	if (debug) {
		my_putstr(" => [INF]  ");
		my_putstr(msg);
		my_putchar('\n');
	}
}

void warning(char *msg)
{
	if (debug) {
		my_putstr(" => [WARN] ");
		my_putstr(msg);
		my_putchar('\n');
	}
}