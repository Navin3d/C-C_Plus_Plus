#include<stdio.h>
#include<conio.h>

void main()
{
	int n, temp, search, middle;
	printf("Enter no of elements in array : ");
	scanf("%d", &n);
	
    int array[n+1], start = 0, end;
	printf("Enter %d elemnts : ", n);
	for(int i = 0; i < n; i++)
		scanf("%d", &array[i]);
	
	for(int i = 0; i < n; i++)
		for(int j = i+1; j<n; j++)
			if(array[i] > array[j]){
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
			
	printf("After sorting : ");
	for(int i = 0; i < n; i++)
		printf("%d", array[i]);

	printf("\nEnter value to find : ");
	scanf("%d", &search);
	
	end = n-1;
	middle = (start+end)/2;
	
	while(start <= end) {
		if(array[middle] < search)
			start = middle+1;
		else if(array[middle] == search){
			printf("\n%d found at index %d ", search, middle);
			break;
		}
		else {
			end = middle-1;
			middle = (start+end)/2;
		}
		if(start > end)
			printf("\nthe element %d not found...");
	}
	getch();
    
}
