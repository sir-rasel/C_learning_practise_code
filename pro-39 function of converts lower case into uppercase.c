#include <stdio.h>
char convert(char a);//prototype declare
int main (){
    char lowercase[30];
    int i;
    printf ("Please input a string : ");
    scanf ("%[^\n]",lowercase);
    for (i=0;lowercase[i]!='\0';i++){
        if (lowercase[i]!=' '){
            lowercase[i]=convert(lowercase[i]);//function call
        }
    }
    printf ("The uppercase order is : %s",lowercase);
    return 0;
}

char convert(char a){//convert lower case to uppercase
    a=(a-'a')+'A';
    return a;
}

