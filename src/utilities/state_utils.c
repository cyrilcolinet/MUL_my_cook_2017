/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** state_utils functions
*/

# include "cook.h"

bool isGameWait(cook_t *data) {
	return ((data->state == gameWait) ? true : false);
}

bool isGameRun(cook_t *data) {
	return ((data->state == gameRun) ? true : false);
}

bool isGameEnd(cook_t *data) {
	return ((data->state == gameEnd) ? true : false);
}

bool isGamePaused(cook_t *data) {
	return ((data->state == gamePause) ? true : false);
}