#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

// Array_Implementation_Of_Stack

int stack[SIZE], top = -1;


void display() {
	if(top == -1) 
		printf("\n\n\tThe Stack is Empty: ");
	else {
		printf("\n\n\tThe Elements of Stack are: ");
		for(int i = top; i >= 0; i--)
			printf("\n\tElement %d is: %d", i+1, stack[i]);
	}
	
}


void push() {
	// int newElement;
	
	if(top == SIZE - 1) 
		printf("\n\n\tThe Stack is Full.");
	else {
		printf("\n\n\tEnter the value to add: ");
		top++;
		scanf("%d", &stack[top]);
		
		// top++;
		// stack[top] = newElement;
	}		
}


void pop() {
	if(top == -1)
		printf("\n\n\tThe Stack is Empty.");
	else {
		printf("\n\n\tThe last Element %d is removed", stack[top]);
		top--;
	}
}


void peek() {
	if(top == -1)
		printf("\n\n\tThe Stack is Empty.");
	else 
		printf("\n\n\tThe last Element %d", stack[top]);
}


void main() {
	printf("\n\tStart of Execution...");
	
	int choise;
	
	while(1) {
		printf("\n\tEnter the choise: ");
		printf("\n\t1) Display 2) Push 3) PoP 4) Peek 5) Exit");
		scanf("%d", &choise);
		
		switch(choise) {
			case 1:
				printf("\n\tYou have choosed Display.");
				display();
				break;
			
			case 2:
				printf("\n\tYou have choosed Push.");
				push();
				break;
				
			case 3:
				printf("\n\tYou have choosed PoP.");
				pop();
				break;
				
			case 4:
				printf("\n\tYou have choosed Peek.");
				peek();
				break;
			
			case 5:
				printf("\n\tYou have choosed To Exit.");
				exit(0);
				break;
				
			default:
				printf("\n\tYou have choosed Invalid Option.");
		}
	}
	
}
