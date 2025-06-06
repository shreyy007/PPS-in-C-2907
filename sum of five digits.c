#include<stdio.h>
int main()
{
	int i,num,sum=0;
	
	printf("Enter Five Digit Number\t");
	scanf("%d",&num);
	
	for(i=1;i<=5;i++)
	
	{
		sum=sum+(num%10);
		
		num=num/10;
		
	}
	
	printf(" sum is %d",sum);
	return 0;
}
