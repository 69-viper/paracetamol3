#include<stdio.h>
int pnz();
int main(){
pnz();
return 0;
}
int pnz(){
	int a;
	
	printf("enter the value of a:\n");
	scanf("%d",&a);
	
	if(a==0){
		printf("the number is zero\n",a);
	}
	
	else if(a>0){
		printf("%d is the positive number\n",a);
	}
	else{
		printf("%d is the negative number\n",a);
	}
	
}
