// A C program to print the half pyramid using loop
#include<stdio.h>
int main()
{
	int i; int j; int row;
	printf("Enter the number of rows\n");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
