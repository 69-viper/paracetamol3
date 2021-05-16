#include<stdio.h>
int greatest();
int main(){
greatest();
return 0;
}
int greatest(){
	int a,b;
	
	printf("enter the value of a:\n");
	scanf("%d",&a);
	printf("enter the value of b:\n");
	scanf("%d",&b);
	
	if(a==b){
		printf("both A=%d and B=%d are equal\n",a,b);
	}
	
	else if(a>b){
		printf("%d is the greatest\n",a);
	}
	else{
		printf("%d is greatest\n",b);
	}
	
}
