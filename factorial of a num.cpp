//wap to find factorial of a number.
#include<stdio.h>
int main()
{
	int i,n,fact=1;
	printf("enter the number to calculate factorial:");
	scanf("%d",&n);
	   for(i=1;i<=n;i++){
	   	
	   	fact=fact*i;
	   }	
	
	printf("the factorial of %d is %d",n,fact);
	return 0;
	
}
