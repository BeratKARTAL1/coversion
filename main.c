#include <stdio.h>
void largtosmall(char* ptr1);
void smalltolarg(char* ptr2);
int main () {
    char sentence[200];
    int size, number;
    size=sizeof(sentence)/sizeof(sentence[0]);
    printf("Please choose 1 or 2:");
    scanf("%d",&number);
    getchar();
    switch (number) {
        case 1:
            puts("Enter an expression containing lowercase letters.");
            fgets(sentence,size,stdin);
            smalltolarg(sentence);
            break;
        case 2:
            puts("Enter an expression containing uppercase letters.");
            fgets(sentence,size,stdin);
            largtosmall(sentence);
            break;
        default:
            puts("ERROR");break;
    }
    return 0;
}
void smalltolarg(char* ptr2) {
    while (*ptr2!='\0') {
        if (*ptr2>='a' && *ptr2<='z') {
            putchar(*ptr2-32);
        }
        else putchar(*ptr2);
        ptr2++;
    }
}
void largtosmall(char* ptr1) {
    while (*ptr1!='\0') {
        if (*ptr1>='A' && *ptr1<='Z') {
            putchar(*ptr1+32);
        }
        else putchar(*ptr1);
        ptr1++;
    }
}