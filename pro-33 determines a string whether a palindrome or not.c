#include <stdio.h>
#include <string.h>
int main () {
    char word[20];
    int i,j;
    printf ("Please input the word ; ");
    scanf ("%s",word);
    for (i=0,j=(strlen(word)-1);i<j;j--,i++){//check reverse form
        if (word[i]!=word[j]) break;
    }
    if (i<j){//decide palindrome or not
        printf ("Given string is not a Palindrome.");
    }
    else {
        printf ("Given string is a Palindrome.");
    }
    return 0;
}
