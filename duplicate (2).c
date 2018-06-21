#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i,j,a;
    printf ("Please input the string : \n");
    scanf ("%s",str);
    a=strlen(str);
    for (i=0;i<a;i++){
        for(j=i+1;j<a;j++){
            if(str[i]==str[j]) str[j]='#';
        }
    }
    printf ("The change string is : %s",str);
    return 0;
}
