#include<stdio.h> 	//header file which includes some function like  printf,scanf etc
int main()
{
	int r, AOC;		//variable declaration
	printf("enter the radius of the circle");
	scanf("%d",&r);
	AOC=3.14*r*r;
	printf("the area of circle is %d",AOC);
	return 0;
}
