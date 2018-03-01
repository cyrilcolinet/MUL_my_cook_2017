/*
** EPITECH PROJECT, 2018
** my_cook_2017
** File description:
** sliders_debugger functions
*/

# include "cook.h"
# include "debug.h"

void print_sliders_infos(slider_t *slide, char *sd[], char *st[])
{
	info("Print slider: ->");
	print_key_value_str("type", sd[slide->type]);
	print_key_value_int("midaxis", slide->mid_axis);
	print_key_value_int("range.x", slide->range.x);
	print_key_value_int("range.y", slide->range.y);
	print_key_value_str("state", st[slide->state]);
}

void print_sliders(cook_t *cook)
{
	slider_t *tmp = cook->slides;
	char *sd[] = {
		"slideVolume", "slideNull"
	};
	char *st[] = {
		"gameUnknown", "gameWait", "gameRun", "gameEnd", "gamePause",
		"gameOnSettings", "gameOnCredits"
	};

	my_putstr("\n");
	info("----------------");
	while (tmp->next != NULL && debug) {
		print_sliders_infos(tmp->next, sd, st);
		tmp = tmp->next;
	}
}
