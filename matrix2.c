// Online C compiler to run C program online
#include <stdio.h>

void main()
{
    int i, j, m, n, sum=0;
    printf("Enter the order of the matrix : ");
    scanf("%d", &m);
    printf("Enter the order of the matrix : ");
    scanf("%d", &n);
    
    int matrix[m][n];
 
    printf("Enter the co-efficients of the matrix : ");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++) 
            scanf("%d", &matrix[i][j]);
    
    for(i=0; i<m; i++)
    	for(j=0; j<n; j++) 
    		sum += matrix[i][j];
       
	printf("sum=%d", sum);

}