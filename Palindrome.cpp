#include<iostream>
#include<string>
using namespace std;

int main() {
	cout<<"\n\t\tThis Code is to verify Palindrome...";
	
	string word, reverse;
	
	cout<< "\n\tEnter the Word : ";
	cin>> word;
	
	for(int i = word.length()-1; i >= 0; i--)
		reverse += word[i];
	
	cout << "\n\tThe Reverse of the word " << word << " is " << reverse;
	
	if(word.compare(reverse) == 0) 
		cout << "\n\tThe given word " << word << " is a Palindrome";
	else
		cout <<"\n\tThe given word " << word << " is not a Palindrome";
	cin >> word;
	return 0;
}