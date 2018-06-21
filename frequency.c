#include <stdio.h>
#include <string.h>
int main() {
    char str[100],str1[100],ch=' ';
    int n,b[100]={},temp1,i,j;
    printf ("Please input the string: \n");
    scanf ("%s",str);
    n=strlen(str);
    for(i=0;i<n;i++){
            str1[i]=str[i];
        for(j=i+1;j<n;j++){
            if (str[i]==str[j]) b[i]++;
        }
    }
    temp1=b[0];
    for (i=1;i<n;i++){
        if (temp1<b[i]){
            temp1=b[i];
            ch=str1[i];
        }
    }
    if (ch==' ') printf ("No frequency in this string");
    else printf ("Element of highest frequency in this string : %c",ch);

    return 0;
}
