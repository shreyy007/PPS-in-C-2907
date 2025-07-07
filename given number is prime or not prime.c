#include <stdio.h>
int main()
{
	int num, rem, i, check=0;
	printf("Enter the Number : ");
	scanf("%d", &num);
	if (num <= 1)
	{
		printf("%d is Not a Prime Number", num);
	}
	else
	{
	  for (i = 2; i < num; i++)
	   {
		rem = num % i ;
		if (rem == 0)
		{
			check = 1;
			break;
		}
	   }	
 	
	  if (check == 0)
	  {
		printf("%d is a Prime Number", num);
	  }
	  else
	  {
		printf("%d is Not a Prime Number", num);
	  }
	}	
	return 0;
} 
