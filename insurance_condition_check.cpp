#include<stdio.h>
int main()
{
	int age;
	char sex, ms;
	printf("enter the age sex ms");
	scanf("%d %c %c", &age, &sex, &ms);
	if (ms=='m'||age>30&&sex=='m'&&age>25)
	printf("Driver is insured");
	else
	printf("Driver is not insured");
	return 0;
}
