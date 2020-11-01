#include<stdio.h>
#include<ctype.h>

int main()
{
	char c = ' ';
	int x = 1;
	int result = isspace(c);
	printf("%d\n", result);
	int digit = isdigit(x);
	printf("%d\n", digit);
	//while(result);
	//while(isdigit(x));
}
