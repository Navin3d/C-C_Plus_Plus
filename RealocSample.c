#include<stdio.h>
#include<stdlib.h>

void main() {

    int size1, size2, sum = 0, *ptr;

    printf("\n\tEnter size of pointer1 : ");
    scanf("%d", &size1);

    ptr = (int*) malloc(size1 * 4);

    printf("\n\tEnter the element : ");
    for(int i = 0; i < size1; i++) {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }
    
    printf("\n\tThe sum = %d", sum);
    
    printf("\n\tEnter size u want to extend (size1 + ?) : ");
    scanf("%d", &size2);

    ptr = (int*) realloc(ptr, size1 + size2);

    printf("\n\tEnter the element : ");
    for(int i = 0; i < size2; i++) {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }

    printf("\n\tThe sum = %d.", sum);

}
