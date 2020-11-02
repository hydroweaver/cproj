#include<stdio.h>
#include<ctype.h>
#include<ncurses.h>

int main()
{
	initscr();
	int c;
	while(true)
	{
		c = getch();
		if(!(c== '1' || c=='2'))
		{
			break;
		}
	}
	endwin();
}
