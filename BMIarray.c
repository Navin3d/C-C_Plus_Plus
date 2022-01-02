#include<stdio.h>

void main() {
    int count;

    printf("\n\tEnter no of persons : ");
    scanf("%d", &count);

    float person[2][count];

    for(int i = 0; i < count; i++) {
        printf("\n\tEnter Weight of person %d (kg) : ", i+1);
        scanf("%f", &person[1][i]);
        printf("\n\tEnter the height of person %d (m) : ", i+1);
        scanf("%f", &person[2][i]);
        printf("\n\tThe BMI of person %d is %f", count, person[1][i]/(person[2][i]*person[2][i]));
    }

    scanf("%d", count);

}
