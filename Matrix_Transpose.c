#include<stdio.h>
void main() {
    int n, m;
    printf("\n\tEnter the dimention of matrix n m : ");
    scanf("%d %d", &n, &m);
    
    int matrix[n][m];
    
    printf("\n\tEnter the elements one by one : ");
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            scanf("%d", &matrix[i][j]);
            
    printf("\n\tThe entered matrix is ");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) 
            printf("\t%d", matrix[i][j]);
        printf("\n\t");   
    }
    
    printf("\n\tThe matrix after transpose is : ");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++)
            printf("\t%d", matrix[j][i]);
        printf("\n\t");
    }
    
}
