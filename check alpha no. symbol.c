//Write C code to check a give character is alphabet or digit or special symbol ?
#include<stdio.h>
void main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("The character is an alphabet.\n");
    }
    else if(ch >= '0' && ch <= '9') {
        printf("The character is a digit.\n");
    }
    else {
        printf("The character is a special symbol.\n");
    }

}  