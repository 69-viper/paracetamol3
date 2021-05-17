//wap to sort numbers in accending order
#include<stdio.h>
int main()
{
	int n,i,j,temp,sort[100];
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the numbers to be sorted in accending order:");
	for(i=0;i<n;i++){
		scanf("%d",&sort[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(sort[i]<sort[j]){
				temp=sort[i];
				sort[i]=sort[j];
				sort[j]=temp;
			}
		}
	}
	printf("te numbers sorted in acccending order are:");
	for(i=0;i<n;i++){
		printf("%d\t",sort[i]);
	}
	return 0;
}
