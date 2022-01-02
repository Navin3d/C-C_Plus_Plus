#include<stdio.h>
#include<stdlib.h>

void main() {
    int count, sum = 0, *ptr;

    printf("\n\tEnter no of Elements : ");
    scanf("%d", &count);

    ptr = (int*) malloc(count * sizeof(int));

    printf("\n\tptr : %d", ptr);

    printf("\n\tEnter the elements : ");

    for(int i = 0; i < count; i++) {
        scanf("%d", ptr+i);
        sum += *(ptr + i);
    }

    printf("\n\tSum = %d", sum);
    free(ptr);

}
