#include<stdio.h>
void main()
{
    printf("\n\tEnter operation toperform...");
    printf("\n\t1) Addition 2) Subtraction 3) Multiplication");
    printf("\n\t4) Division 5) Square 6) Exit");
    
    int choise;
    
    printf("\n\tEnter the choise ");
     scanf("%d", &choise);
    
    float num1, num2;
    
    while(choise != 6) {
        switch(choise) {
            case 1:
                printf("\n\tEnter number 1 2 : ");
                scanf("%f %f", &num1, &num2);
                printf("\n\tThe sum is : %f", num1+num2);
                break;
            case 2:
                printf("\n\tEnter number 1 2 : ");
                scanf("%f %f", &num1, &num2);
                printf("\n\tThe Result is : %f", num1 - num2);
                break;
            case 3:
                printf("\n\tEnter number 1 2 : ");
				scanf("%f %f", &num1, &num2);
                printf("\n\tThe Result is : %f", num1 * num2);
                break;
            case 4:
                printf("\n\tEnter number 1 2 : ");
                scanf("%f %f", &num1, &num2);
                printf("\n\tThe Result is : %f", num1 / num2);
                break;
            case 5:
                printf("\n\tEnter number 1 : ");
                scanf("%f", &num1);
                printf("\n\tThe Result is : %f", num1 * num1);
                break;
            default:
                printf("\n\tEnter number from only 1 - 6.");
                break;
        }
    }
    
}