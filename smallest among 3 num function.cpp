#include<stdio.h>
int smallest();
int main(){
smallest();
return 0;
}
int smallest(){
	int a,b,c;
	
	printf("enter the value of a:\n");
	scanf("%d",&a);
	printf("enter the value of b:\n");
	scanf("%d",&b);
	printf("enter the value of c:\n");
	scanf("%d",&c);
	if(a==b && b==c && c==a){
		printf("a,b and c all numbers are equal\n");
	}
	else if(a<b || a<c){
		printf("%d is the smallest\n",a);
	}
	
	else if(b<a || b<c){
		printf("%d is the smallest\n",b);
	}
	else{
		printf("%d is smallest\n",c);
	}
	
}
