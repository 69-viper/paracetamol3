#include<stdio.h>
int main()
{
	int n,i,a,min,len,k,j;
	
	printf("enter the value to display it's multiplication table\n");
	scanf("%d",&n);
	
	for(k=1;k<10;k++){
		
		printf("%d * %d=%d\n",n,k,n*i);
	}
	printf("\n-----------------------------------------------------------------------------------");
	printf("\n-----------------------------------------------------------------------------------");
    printf("\nenter the value of concentric pattren\n");
    scanf("%d", &a);
	
    len = a*2 - 1;
    for( i=0;i<len;i++){
        for( j=0;j<len;j++){
             min = i < j ? i : j;
            min = min < len-i ? min : len-i-1;
            min = min < len-j-1 ? min : len-j-1;
            printf("%d ", a-min);
        }
        printf("\n");
    }
	
	return 0;
}
