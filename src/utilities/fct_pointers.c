/*
** EPITECH PROJECT, 2018
** fct pointers
** File description:
** array of pointers of the function representating the states of the game
*/

#include "cook.h"

int which_state(state_e state)
{
	int ret = 0;
	
	if(state == gameUnknown)
		ret = 0;
	else if(state == gameWait)
		ret = 1;
	else if(state == gameRun)
		ret = 2;
	else if(state == gameEnd)
		ret = 3;
	else if(state == gamePause)
		ret = 4;
	else if(state == gameOnSettings)
		ret = 5;
	else if(state == gameOnCredits)
		ret = 6;

	return (ret);
}

void fct_pointers(cook_t *cook)
{
	int pos = 0;
	void (*fun_ptr_arr[])(cook_t *) = {NULL, wait_loop, NULL, NULL,
					   NULL, options_view,
					   credits_view};
	
	pos = which_state(cook->state);
	(*fun_ptr_arr[pos])(cook);
}
