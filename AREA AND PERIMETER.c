#include <stdio.h>
int main()
{
	printf("SHREEYASH SUTRAVE\n24030331372907 \nEXTC(R) Batch-C\n");
	
	int l,b,area,perimeter;
	
	printf("Enter the Length \n");
	scanf("%d", &l);
	printf("Enter the breath \n");
	scanf("%d", &b);
	
	area=l*b;
	perimeter=2*(l+b);
		
	printf("The Area of Rectangle is %d \n" ,area);
		
	printf("The Perimeter of Rectangle is %d",perimeter);
	return 0;
}
