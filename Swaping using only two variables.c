#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the number 1\t");
    scanf("%d",&a);
    
    printf("Enter the number 2\t");
    scanf("%d",&b);
    
    printf("Before swaping:a=%d,b=%d\n",a,b);
    
    a=a+b;
    b=a-b;
    a=a-b;
    
    
    printf("After swaping:a=%d,b=%d\n",a,b);
   return 0;
   
}
