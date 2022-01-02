#include<stdio.h>
#include<conio.h>
#include<string.h>

void main() {
	char string[] = {'n', 'a', 'v', 'i', 'n'}, temp;
	
	//printf("\n\tEnter the characters of array : \n");
	//scanf("%s", &string);
	
	//printf("\n\tThe elements of STring are : ");
	//printf("%s", string);
	
	for(int i = 0; i < 5; i++)
		for(int j = 1; j < 6; j++)
			if(string[i] > string[j]) {
				temp = string[i];
				string[i] = string[j];
				string[j] = temp;
				printf("\ni = %d j = %d string[i] = %c string[j] = %c", i, j, string[i], string[j]);
			}
	
	printf("\n\tThe elements of STring after sortinig are : %s", string);
	//for(int i=0; i!='\0'; i++)
	//	printf("%c", string);
	
	getch();
}
