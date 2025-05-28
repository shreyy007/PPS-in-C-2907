#include<stdio.h>
int main()
{
	int i;
	for(i=0;i<=10;i++)
	{
		if(i==3)
		{
			break;
		}
		printf("\n%d\t",i);
	}
	printf("\nEND\t");
	
	return 0;
}
