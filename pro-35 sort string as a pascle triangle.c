#include<stdio.h>
#include <string.h>
int main(){
    int a,b,i,j,k=0,l;
    char str[]="123456789";
    a=b=(strlen(str)+1)/2;
    for (i=1;i<=a;i++){
        for (j=1;j<b;j++){
            printf (" ");
        }b--;
        for (j=0;j<i;k++,j++){
            printf ("%c",str[k]);
            l=k;
        }k=i;
        for (j=i-1,l--;1<=j;l--,j--){
            printf ("%c",str[l]);
        }
        printf ("\n");
    }
    return  0;
}
