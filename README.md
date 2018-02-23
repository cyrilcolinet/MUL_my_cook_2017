# My Cook - Cooking can be fun

- **Binary name:** my_cook
- **Repository name:** my_cook_2017
- **Repository rigths:** ramassage-tek, baptiste.tougouri@epitech.eu
- **Language:** C
- **Group Size:** 2
- **Compilation:** via Makefile, including re, clean and fclean rules


# Subject

For this project you will have to make a game inspired by [Cook Serve Delicious].
Your main challenge for this game will be to create nice and smooth user interface and
menus. Your game will have to follow these rules:
- The player is a cook in a restaurant.
- Orders will appear randomly to the player.
- Orders will have a limited time to be done.
- Orders will be of different types.
- The player will have to choose the right ingredients in the right order.

Having a pleasant user interface is one of the details that makes a good quality game, this project is the occasion for you to try your best on that topic.

> :bulb: You should look for information about how to create interface in video game.

## Requirements

### Mandatory
The following features are **mandatory** if your project is missing one of them it will not be evaluated further:
- The window can be closed using events.
- The game manage the input from the mouse click and keyboard.
- The game contain animated sprites rendered thanks to sprite sheets.
- Animations in your program are frame rate independent.
- Animations and movements in your program are timed by clocks.

### Must

- The game **must** have a starting menu.
- The starting menu **must** have at least two buttons, one to launch a game, and one to quit the game.
- When a game is launched the escape key **must** pause the game.
- When a game is paused a menu **must** be shown with a button to go to the starting menu and a button to leave the game.
- The starting menu and the game **must** be two different scenes.
- There **must** be at least 4 different types order (e.g. two different pizza, one hamburger, one lasagna)
- The ingredients for your recipes **must** be in an inventory menu.

### Should

- Your window **should** stick between 800x600 pixels and 1920x1080 pixels.
- The game **should** have a “How To play” menu, explaining how to play to your game.
- The game **should** store a scoreboard.
- The scoreboard **should** be displayed at the end of a game, or thanks to a high score button in the starting menu.
- The buttons in your game **should** have a at least three visual states: idle, hover, and clicked.
- If your game has cut scenes or an animated intro the player **should** be able to skip it.

### Could

- The game **could** let the user customize its recipes.
- The game **could** load recipes from files.
- The game **could** take recipes files as command line argument.
- The game **could** take recipes files from a menu inside the game.
- The game **could** have a skill tree, unlock different types of recipes.
- The game **could** have a “settings” menu.
- The setting menu **could** contain sound options.
- The setting menu **could** contain screen size options.

### Would

- The program **would** be a real video game.

> :exclamation: The size of your repository (including the assets) must be as small as possible. Think about the format and the encoding of your resource files (sounds, musics, images, etc.).
> An average maximal size might be 15MB, all included. Any repository exceeding this limit might not evaluated at all.

> :bulb: This project might be your first group project, you should consider organising working sessions with your team mates.

<div align="center"><img src="http://www.vertigogaming.net/CSD/wp-content/uploads/2015/05/CSD_Logo.png" alt="" /></div>

## Authorized functions

- From the C library:
  - malloc, free, memset
  - rand, srand, time
  - (f)open, (f)read, (f)close, (f)write
  - getline
- From the CSFML library:
  - All functions

> :bulb: What happens if you run your program like this: `env -i ./my_cook` ?

- From the math library
  - All functions

> :exclamation: Any unspecified functions are de facto banned.

> :bulb: How can you have a random seed without using `time` function ?

# Table of content
<!-- TOC depthFrom:1 depthTo:6 withLinks:1 updateOnSave:1 orderedList:0 -->

- [My Cook - Cooking can be fun](#my-cook-cooking-can-be-fun)
- [Subject](#subject)
	- [Requirements](#requirements)
		- [Mandatory](#mandatory)
		- [Must](#must)
		- [Should](#should)
		- [Could](#could)
		- [Would](#would)
	- [Authorized functions](#authorized-functions)
- [Table of content](#table-of-content)

<!-- /TOC -->

[Cook Serve Delicious]: https://en.wikipedia.org/wiki/Cook,_Serve,_Delicious!
