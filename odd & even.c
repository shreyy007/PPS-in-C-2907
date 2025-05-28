#include<stdio.h>
int main()
{
	int num,rem;
	
	printf("Enter the Number\t");
	scanf("%d",&num);
	
	rem=num%2;
	
	if(rem==0)
	{
		printf("The Entered Number %d Is Even",num);
	}
	else
	{
		printf("The Entered Number %d Is Odd",num);
	}
	
	return 0;
}
