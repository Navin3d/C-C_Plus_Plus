#include<stdio.h>
#include<stdlib.h>

// Linked_List_Implementation_Of_Queue

struct node {
	int data;
	struct node *next;
};

struct node *front = NULL, *rear = NULL;

void display() {
	struct node *temp = rear;
	if(rear == NULL)
		printf("\n\tThe Queue is Empty...");
	else {
		printf("\n\tThe elements of the array are: ");
		while(temp->next != NULL) {
			printf("%d, ", temp->data);
			temp = temp->next;
		}
	}
}


void enQueue() {
	struct node *temp;
	
	temp = (struct node*)malloc(sizeof(struct node));
	
	printf("\n\tEnter the element to add: ");
	scanf("%d", &temp->data);
	
	temp->next = NULL;

	if(front == NULL)
		front = temp = rear;
	else {
		rear->next = temp;
		rear = temp;
	}
}


void deQueue() {
	if(front == NULL)
		printf("\n\tThe Queue is Empty...");
	else {
		struct node *temp = front;		
		printf("\n\tThe First Element %d is deleted.", temp->data);
		front = front->next;
	}
}


void main() {
	int choise;
	while(1) {
		printf("\n\tEnter the choise: ");
		printf("\n\t1) Display 2) En-Queue 3) De-Queue 4) Exit");
		scanf("%d", &choise);
		
		switch(choise) {
			case 1:
				display();
				break;
			
			case 2:
				enQueue();
				break;
			
			case 3:
				deQueue();
				break;
			
			case 4:
				exit(0);
				break;
				
			default:
				printf("\n\tInvalid Option...");
		}
	}
}
