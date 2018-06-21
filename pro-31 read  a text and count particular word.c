#include <stdio.h>
int main () {
    char str[100];
    int i,count=0;
    printf ("Please input the text : \n");
    scanf ("%[^\n]",str);
    for (i=0;str[i]!='\0';i++){//check the number of particular number
        if (str[i]=='s') count++;
    }
    printf ("The number of particular word is : %d",count);
    return 0;
}
