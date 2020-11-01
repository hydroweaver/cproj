#include<stdio.h>

int main()
{
	char c = 'a';
	if((char)97 == 'a')
	{
		printf("true\n");
	}

	printf("%d\n", (int)'a');
	printf("%c\n", (char)97);
	printf("%d\n", 97 - '0');
}
