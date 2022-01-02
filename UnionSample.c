#include<stdio.h>
#include<string.h>

union user {
    int id;
    char name[20];
};

void main() {

    union user user1;
    user1.id = 92;
    strcpy(user1.name, "Navin");

    printf("\n\tThe user1 ID : %d", user1.id);
    printf("\n\tThe user1 name: %s", user1.name);
        
}
