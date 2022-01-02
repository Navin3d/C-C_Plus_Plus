#include<stdio.h>
#include<conio.h>

void main() {
	
	int a, b, c;
		
	printf("\nEnter the value of a b c : ");
	scanf("%d %d %d", &a, &b, &c);
	
	if(a > b) {
		printf("\nThe number %d", a, " is Greater than : %d", b);
	} else if (b > c) {
		printf("\nThe Number %d is Greater than : %d", b, c);
	} else {
		printf("\nThe Number %d", c, " is greater");
	}
	
	getch();
	
}