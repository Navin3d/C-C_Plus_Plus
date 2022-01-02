#include<stdio.h>

void main() {
	char string1[10], string2[10], reverse[10];
	int length = 0, i = 0, unequal = 0;

	////////STRING LENGTH///////
	
	printf("\n\tEnter the String : ");
	scanf("%s", string1);
	printf("\n\tThe string is : %s", string1);
	
	while(string1[length] != '\0') 
		length++;

	printf("\n\tThe lengh of String %s is : %d ", string1, length);
	
	///////STRING COMPARE////////
	
	printf("\n\tENter the String2 : ");
	scanf("%s", string2);
	
	if(string1 < string2)
		printf("\n\tThe string %s is greater than %s.", string1, string2);
	else if(string2 < string1)
		printf("\n\tThe string %s is greater than %s.", string2, string1);
	else
	printf("\n\tThe string %s is equal to %s.", string1, string2);
	
	/////////STRING CONCAT///////
	
// 	printf("\n\tThe string %s + string %s is : ", *string1 + *string2);
	
	///////REVERSING A STRING////////
	
	i = 0;
	
	reverse[length] = '\0';
	while(string1[i] != '\0') {
		reverse[length-1] = string1[i];
		i++;
		length--;
	}
	 
	printf("\n\tThe reverse of the strng is : %s", reverse);
	
// 	reverse[length] = '\0';
	while(string1[i] != '\0') {
		if(reverse[length-1] == string1[i])
			unequal++;
		i++;
		length--;
	}	
	
	if(unequal != length)
		printf("\n\tThe string %s and %s are equal.", string1, reverse);
	else
		printf("\n\tThe string %s and %s are unequal.", string1, reverse);
}