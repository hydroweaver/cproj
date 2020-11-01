#include<stdio.h>

void swap(int *, int *);

void swap(int* a, int * b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
	printf("a is : %d, b is %d\n", *a, *b);
};

int main()
{
	int a = 22;
	int b = 40;

	printf("a is : %d, b is %d\n", a, b);
	swap(&a, &b);
}
