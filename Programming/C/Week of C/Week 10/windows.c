/* ncurses.c */
#include <ncurses.h>

int main()
{
	char letter;

	initscr(); // initializes the screen
	printw("Press any key"); //instead of printf in ncurses you use printw
	refresh();

	letter = getch(); //like getchar but ncurses version, it's more advanced because it can read stuff like left arrow, esc etc.
	clear;
	printw("You pushed: '%c'", letter);
	refresh();

	getch();
	endwin();

	return 0;
}