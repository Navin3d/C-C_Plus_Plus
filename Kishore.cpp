#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

int main() {
    int start = 0, end = 5, mid = (start + end)/2;
    for(int i = 0; i <= 5; i++) {
        string shape[6] = {" ", " ", " ", " ", " ", " "};
		string letter = "";
        shape[start] = " H";
        shape[end] = " H";
        if(i == 2)
            for(int j = 1; j <= 4; j++)
                shape[j] = "H";
		for(int k = 0; k <= 5; k++)
			letter += shape[k];
        cout<< letter << endl;
    }
	for (int i = 0; i <= 5; i++) {
        string shape[5] = {" ", " ", " ", " ", " ", " "};
		string letter = "";
		shape[mid - i] = " A";
		shape[mid + i] = " A";
		if(i == 2)
            for(int j = 1; j <= 4; j++)
                shape[j] = "A";
		for(int k = 0; k <= 5; k++)
			letter += shape[k];
        cout<< letter << endl;
	}
	//getch();
    return 0;
}
