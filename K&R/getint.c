#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<ncurses.h>

int getint(int *);

int main()
{
	initscr();
	int array[0];
	getint(&array[0]);
	endwin();
	printf("Value in array is %d \n", array[0]);
}

int getint(int *pn)
{
	int c, sign;
	*pn=0;
	
	while(isspace(c=getch()));
	if(!isdigit(c) && !(c=='+') && !(c=='-') && !(c==EOF))
	{
		return 0;
	}
	
	sign = (c == '-') ? -1 : 1;
	//c = getch();
	if(c == '+' || c=='-')
	{
		while(true)
		{
			c = getch();
			if(!(c == '+' || c == '-'))
				break;
		}
	}
	//Only one ungetch below is needed since, the above while loop
	//ensure all +/- characters would be overwritten when a digit comes in 
	ungetch(c);
	for(*pn =0;isdigit(c=getch());)
	{
		*pn = *pn * 10+c - '0';
	}

	*pn *= sign;

	return *pn;
}

