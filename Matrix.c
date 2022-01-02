#include<stdio.h>
#include<conio.h>


int getMatrix(int n, int m) {
	int i, j, matrix[n][m];
	
	printf("Enter the elements of matrix : ");
	for(i = 0; i < n; i++)
		for(j = 0; j < m; j++)
			scanf("%d", &matrix[i][j]);
	
	return *matrix;
}

void main() {
	int n, m, i, j, sum=0;
	
	printf("Enter no of rews in matrix : ");
	scanf("%d", &n);
	
	printf("Enter no of column in matrix : ");
	scanf("%d", &m);
	
	int matrix[n][m];
	
	matrix = getMatrix(n,m);
	
	for(i=0; i<2; i++)
		for(j=0; j<2; j++) 
			sum += matrix[i][j];
		

	printf("the sum is %d", sum);
}
