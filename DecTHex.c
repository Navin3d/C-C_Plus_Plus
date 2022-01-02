#include <stdio.h>
 
void main()
{
    long decimalnum, quotient, remainder;
	int j = -1;
    char hexadecimalnum[100];
 
    printf("\n\tEnter decimal number: ");
    scanf("%ld", &decimalnum);
 
    quotient = decimalnum;
 
    while (quotient != 0)
    {
        remainder = quotient % 16;
        if (remainder < 10) {
			j++;
            hexadecimalnum[j] = 48 + remainder;
		}
        else {
			j++;
            hexadecimalnum[j] = 55 + remainder;
		}
        quotient = quotient / 16;
    }
	
	printf("\n\tThe Hexadecimal Value of %d is ", decimalnum);
    for (int i = j; i >= 0; i--)
        printf("%c",  hexadecimalnum[i]);
	
	scanf("%d", &j);
	
}