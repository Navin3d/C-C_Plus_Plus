#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
//using namespace std;

// Singly_Linked_List

void main() {
	
	struct node {
		int data;
		struct node*next;
	};
	
	struct node *head = NULL;
	
	void beginsert() {
		int vlueToInsert;
		
		struct node *newNode = (struct node*) malloc(sizeof(struct node));
		
		if(newNode == NULL)
			printf("\n\tOverFlow...");
		else {
			printf("\n\tEnter the Element you want to add: ");
			scanf("%d", &vlueToInsert);
			
			newNode->data = vlueToInsert;
			newNode->next = head;
			
			head = newNode;
			printf("\n\tInserted %d", head->data);
		}
	}
	
	void lastinsert() {
		int vlueToInsert;
		
		struct node *newNode, *temp;		
		newNode = (struct node*) malloc(sizeof(struct node));
		
		if(newNode == NULL)
			printf("\n\tOverFlow...");
		else {
			printf("\n\tEnter the Element you want to add: ");
			scanf("%d", &vlueToInsert);
			
			newNode->data = vlueToInsert;
			
			if(head == NULL) {
				newNode->next = NULL;
				head = newNode;
				printf("\n\tValue Added %d", head->data);
			} else {
				temp = head;
				while(temp->next != NULL) 
					temp = temp->next;
				
				newNode->next = NULL;
				temp->next = newNode;
				printf("\n\tValue Added %d", head->data);
			}
			
			temp->next = newNode;
			printf("\n\tInserted %d", head->data);
		}
	}
	
	void display() {
		struct node *temp;		
		temp = head;
		
		if(temp == NULL)
			printf("\n\tThe List is Empty");
		else {
			while(temp != NULL) {
				printf("\n\tThe Values in the list are: %d", temp->data);
				temp = temp->next;
			}
		}
	}
	
	void search() {
		struct node *temp;
		temp = head;
		
		int search, foundIndex;
		bool isFound = true;
		
		if(temp == NULL)
			printf("\n\tThe List is empty.");
		else {
			printf("\n\tEnter the element you want to serach: ");
			scanf("%d", &search);
			
			
		}
	}
	
	int choise;
	
	while(choise != 4) {
		printf("\n\t1) Display 2) beginsert 3) lastInsert 4) Exit");
		printf("\n\tEnter the choise: ");
		scanf("%d", &choise);
		
		switch(choise) {
			case 1:
				display();
				break;
			case 2:
				beginsert();
				break;
			case 3:
				lastinsert();
				break;
			case 4:
				search();
				break;
			case 5:
				exit(0);
		}
	}
	
}
