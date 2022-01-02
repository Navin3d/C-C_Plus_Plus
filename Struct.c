#include<stdio.h>
#include<conio.h>

void main() {
	
	char books[200][10];
	char author[200][10];
	int price[200][4], sum = 0;
	
	for(int i = 0; i < 200; i++) {
		printf("\n\tEnter the name of book %d : ", i+1);
		for(int j = 0; j < 10; j++) 
			scanf("%c", &books[i][j]);		
	}
	
	for(int i = 0; i < 200; i++) {
		printf("\n\tEnter the name of author %d : ", i+1);
		for(int j = 0; j < 10; j++) 
			scanf("%c", &author[i][j]);		
	}
	
	for(int i = 0; i < 200; i++) {
		printf("\n\tEnter the price of book %d : ", i+1);
		for(int j = 0; j < 4; j++) 
			scanf("%c", &price[i][j]);		
	}
	
	for(int i = 0; i < 200; i++) {
		sum += *price[i];
	}
	printf("\n\tThe total sum of books = %d;", sum);
	
	printf("\n\tThe books above price 500$ are : ");
	for(int i = 0; i < 200; i++)
		if(*price[i] > 500)
			printf(books[i],",");
	
}
