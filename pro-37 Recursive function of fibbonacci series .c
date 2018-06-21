#include <stdio.h>
void fib(int n,int a,int b);//prototype declare
int main () {
    int m,a=1,b=1;
    printf ("Please input mth number : \n");
    scanf ("%d",&m);
    printf ("%d %d ",a,b);
    fib(m,a,b);//call function
    return 0;
}
void fib(int n,int a,int b){
    int c;
    if (n>2){
        c=a+b;
        a=b;
        b=c;
        printf ("%d ",c);
        fib(n-1,a,b);
    }
    return;
}
