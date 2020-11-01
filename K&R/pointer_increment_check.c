#include<stdio.h>
#include<string.h>

int main()
{
	int* a;
	int b = 22;
	a = &b;
	printf("%d %d %d\n", *a, *a+1, b);
	*a = 220;
	printf("%d %d %d\n", *a, *a+1, b);

	char* c;
	char d[] = {"character"};
	c = &d[0];
	printf("%s\n", c);
	/*printf("%s\n", c+1);
	printf("%s\n", c+2);
	printf("%s\n", c+3);*/


	int *x;
	int *y;
	x = &b;
	y = x;
	printf("x is : %d y is : %d\n", *x, *y);
	printf("x points at %p, y points at %p\n", x, y);

	int *z;
	int v = 22;
	z = &v;
	*z += 1;
	printf("z is %d v is %d\n", *z, v);

}
