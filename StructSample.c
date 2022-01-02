#include<stdio.h>
#include<string.h>

struct user {
    int id;
    char name[20];
    char password[20];
};

void main() {

    char *tempPassword;

    struct user user1;
    user1.id = 92;
    strcpy(user1.name, "Navin");
    strcpy(user1.password, "navin@3d");

    printf("\n\tEnter the password: ");
    scanf("%s", tempPassword);

    if(strcmp(tempPassword, user1.password) != 0)
        printf("\n\tSorry Wrong password.");
    else
        printf("\n\tHello %s", user1.name);
        
    printf("\n\n\tEnd of execution.");

}
