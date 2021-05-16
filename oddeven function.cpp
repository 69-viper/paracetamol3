#include<stdio.h>
int oddeven();
int main(){
oddeven();
return 0;
}
int oddeven(){
	int n;
	
	printf("enter the value of n:");
	scanf("%d",&n);
	
	if(n % 2 == 0){
		printf("the number %d is even\n",n);
	}
	else
	{
		printf("the number %d is odd\n",n);
	}
}
