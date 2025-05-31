#include<stdio.h>
int main()
{
	int num;
	printf("enter the number:\t");
	scanf("%d",&num); 
	if(num>100 || num<0)
	{
		printf("enter marks are not valid");
	}
	else if(num>=90)
	{ 
	printf("\nA grade");
	}
	else if(num>=80)
	{
		printf("\nB grade");
	}
	else if(num>=70)
	{
		printf("\nC grade");
	}
	else if(num>=60)
	{
		printf("\nD grade");
	}
	else if(num>=50)
	{
		printf("\nE grade");
	}
	else 
	{
		printf("\n fail");
	}
	return 0;
}
