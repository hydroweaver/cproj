#include<stdio.h>
#include<stdbool.h>

int x_size=1;
int x[0];
int current=0;
//int present[x_size];

int first_encounter(int a)
{
	for(int i=0;i<x_size;i++)
	{
		if(x[i] == a)
		{
			return false;
		}
		else
		{
			x[current] = a;
			x_size += 1;
			current = x_size + 1;
			return true;
		}
	}
}
void single(int *nums, int numsSize)
{
	for(int i=0;i<numsSize;i++)
	{
		if(first_encounter(nums[i]))
		{
			int counter = 0;
			int new_arr[numsSize];

			for(int k=0;k<numsSize;k++)
			{
				new_arr[k] = nums[k];
			}
			printf("%d added to list\n", nums[i]);
			for(int k=0;k<numsSize;k++)
			{
				if(nums[i] == new_arr[k])
				{
					counter += 1;
				}
			}


			if(counter == 1)
			{

				printf("Your number is %d.\n", nums[i]);
				counter = 0;
				//return nums[i];
			}

		}
		else
		{
			printf("Skipping number\n");
			continue;
		}
	}
}


int main()
{
	int a[7] = {2, 4, 2, 4, 5, 2, 4};
	int size = sizeof(a)/sizeof(int);
	single(a, size);
}

