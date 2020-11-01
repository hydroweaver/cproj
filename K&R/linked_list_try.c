#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}
node;

int main()
{
	node* ptr;
	ptr = (node *) malloc(10*sizeof(ptr));
	printf("%p\n", p);
	//nodes[0].next -> nodes[1];
}
