#include<stdio.h>
int main()
{
	int a=1,b=0,c,n,i;
	
	printf("enter the value of n:");
	scanf("%d",&n);
	printf("the series upto %dth term is:",n);
	
	for(i=1;i<=n;i++){
		printf("%d,",c);
		a=b;
		b=c;
		c=a+b;
		
	}
	return 0;
}
