#include<stdio.h>
#include<stdlib.h>

// Linked_List_Implementation_Of_Stack

struct node {
	int data;
	struct node *next;
};

struct node *top = NULL;

void display() {
	struct node *temp = top;
	
	if(top == NULL) 
		printf("\n\n\tThe Stack is Empty: ");
	else {
		printf("\n\n\tThe Elements of Stack are: ");
		while(temp != NULL) {
			printf("%d, ", temp->data);
			temp = temp->next;
		}
	}
	
}


void push() {
	struct node *temp;
	
	temp = (struct node*)malloc(sizeof(struct node));
	
	printf("\n\n\tEnter the value to add: ");
	scanf("%d", &temp->data);
	
	temp->next = top;	
	top = temp;
}


void pop() {
	struct node *temp = top;
	
	printf("\n\n\tThe First Element %d is removed.", temp->data);
	top = temp->next;
}


void peek() {
	struct node *temp = top;
	
	if(top == NULL)
		printf("\n\n\tThe Stack is Empty.");
	else 	
		printf("\n\n\tThe Last Element %d.", temp->data);
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
