#include<stdio.h>

void main() {

    char sentence[100], word[20], replacement[20];

    printf("\n\tEnter a sentence : ");
    scanf("%s", sentence);

    printf("\n\tEnter a word to replace in this sentence '%s'.", sentence);
    scanf("%s", word);

    printf("\n\tEnter the word to replace '%s'.", word);
    scanf("%s", replacement);

}
