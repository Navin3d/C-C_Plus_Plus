#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

// Array_Implementation_Of_Queue

int queue[SIZE], front = -1, rear = -1;


void display() {
	if(front == -1) 
		printf("\n\n\tThe queue is Empty: ");
	else {
		printf("\n\n\tThe Elements of queue are: ");
		for(int i = front; i < rear + 1; i++)
			printf("\n\tElement %d is: %d", i+1, queue[i]);
	}
	
}


void enQueue() {
	int temp;
	
	if(rear == SIZE - 1) 
		printf("\n\n\tThe queue is Full.");
	else {
		printf("\n\n\tEnter the value to add: ");
		scanf("%d", &temp);
		
		if(front == -1) 
			front = 0;
		
		rear++;
		queue[rear] = temp;
	}		
}


void deQueue() {
	int j, temp;
	
	if(front == -1)
		printf("\n\n\tThe queue is Empty.");
	else {
		printf("\n\n\tThe First Element %d is removed", queue[front]);
		
		for(int i = 0; i < rear + 1; i++)
			queue[i] = queue[i+1];
	
		rear--;
	}
}



void main() {
	printf("\n\tStart of Execution...");
	
	int choise;
	
	while(1) {
		printf("\n\tEnter the choise: ");
		printf("\n\t1) Display 2) En-Queue 3) De-Queue 4) Exit");
		scanf("%d", &choise);
		
		switch(choise) {
			case 1:
				printf("\n\tYou have choosed Display.");
				display();
				break;
			
			case 2:
				printf("\n\tYou have choosed En-Queue.");
				enQueue();
				break;
				
			case 3:
				printf("\n\tYou have choosed De-Queue.");
				deQueue();
				break;
				
			case 4:
				printf("\n\tYou have choosed To Exit.");
				exit(0);
				break;
				
			default:
				printf("\n\tYou have choosed Invalid Option.");
		}
	}
	
}
