#include<stdio.h>
#include<string.h>

typedef struct {
    int id;
    char addressLine1[500];
    char addressLine2[500];
    int zipcode;
    int phoneNumber[10];
} ADDRESS;

void main() {

    ADDRESS navin;
    navin.id = 1;
    strcpy(navin.addressLine1, "7/35B veerarahavapuram st");
    strcpy(navin.addressLine2, "Tiruchendur.");
    navin.zipcode = 628215;
    // navin.phoneNumber = {9,4,4,2,8,0,7,2,1,7};

    printf("\n\tID : %d", navin.id);
    printf("\n\tADDRESSLINE 1 : %s", navin.addressLine1);
    printf("\n\tADDRESSLINE 2 : %s", navin.addressLine2);
    printf("\n\tZIPCODE : %d", navin.zipcode);
    printf("\n\tPHONE NUMBER : %d", navin.phoneNumber);

}
