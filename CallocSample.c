#include<stdio.h>
#include<stdlib.h>

void main() {

    int count, *ptr, sum = 0;

    printf("\n\tEnter No Of elem : ");
    scanf("%d", &count);

    ptr = (int*) calloc(count, 4);

    for(int i = 0; i < count; i++) {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }

    printf("\n\tThe Sum is : %d", sum);
    free(ptr);

}
