#include<stdio.h>
#include<stdlib.h>

int main()
{
	char* c[] = {"a"};

	printf("%d\n", atoi(c[0]));
	printf("%f\n", atof(c[0]));
}
