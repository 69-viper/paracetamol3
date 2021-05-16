//wap to genetrate series upto 8th term

#include<stdio.h>
int main()
{
	int i,a,b,c;
	int n;
	printf("enter the size you want to display series upto:");
    scanf("%d",&n);
	a=0;
	b=1;
	
	printf("the sseries upto 8th term is:\n");
	   
	for(i=1;i<=n;i++){
		printf("%d,",c);
	
	   a=b;
	   b=c;
	   c=a+b;
	}
	
	
	
	return 0;
}
