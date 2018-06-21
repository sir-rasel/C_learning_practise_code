#include <stdio.h>
int prime(int x);//prototype declare
int main () {
    int num,b;
    printf ("Please input a number : ");
    scanf ("%d",&num);//take input
    if (num>1){
        b=prime(num);//function call
        printf ("%d",b);
    }
    return 0;
}
int prime(int x){//define function of check prime of not
    int i,a;
    for (i=2;i<x;i++){
        if (x%i==0){
            a=0;
            return a;
        }
        else {
            a=1;
        }
    }
    return a;
}
