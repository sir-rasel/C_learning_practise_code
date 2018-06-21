#include <stdio.h>
int main () {
    char str[100],temp;
    int i,j,k=1;
    printf ("Please input the text : \n");
    scanf ("%[^\n]",str);
    for (i=0;str[i]!='\0';i++){//check every index and sorting them alphabetical order
        for (j=k;str[j]!='\0';j++){
            if (str[i]>str[j]){//sorting alphabetical order
                temp=str[j];
                str[j]=str[i];
                str[i]=temp;
            }
        }
        k++;
    }
    printf ("The alphabetical order is : %s",str);
    return 0;
}
