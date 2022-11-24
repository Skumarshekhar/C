#include<stdio.h>
int main()
{
	int age;
	char sex, ms;
	printf("enter the age sex and ms");
	scanf("%d %c %c",&age,&sex,&ms);
	if (ms=='m')
	printf("Driver is insured");
	else
	{
		if (age>30&&sex=='m')
		printf("Driver is insured");
	{
		if(age>25)
		printf("Driver is insured");
		else 
		printf("Driver is not insured");
	}
	
}}
