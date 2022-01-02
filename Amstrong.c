#include <stdio.h>
int main() {
    int num, originalNum, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &originalNum);
	
	num = originalNum;

    while (num != 0) {
        remainder = num % 10;
        
       result += remainder * remainder * remainder;
        
       num /= 10;
    }

    if (result == originalNum)
        printf("Num is %d an Armstrong number. %d", originalNum, result);
    else
        printf("Num is %d not an Armstrong number. %d", originalNum, result);

    return 0;
}