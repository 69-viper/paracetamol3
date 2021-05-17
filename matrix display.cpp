//wap to display 3*3 matrix
#include<stdio.h>
int main()
{
	int i,j,matrix[3][3];
	printf("enter the elements of matrix:");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	
	printf("the matrix is:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",matrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}
