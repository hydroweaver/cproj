#include<stdio.h>
#include<ctype.h>
#include<ncurses.h>

int main()
{
	initscr();
	int flag = 1;
	while(true)
	{
		if(!isspace(getch()))
		break;
		
	}
	endwin();
}
