#include <stdio.h>
int add(int a,int b);
int sub(int a,int b);
int main (){
    int a,b,c,d;
    a=20;
    b=10;
    c=add(a,b);
    d=sub(a,b);
    printf ("%d+%d=%d\n",a,b,c);
    printf ("%d-%d=%d",a,b,d);
    return 0;
}
int add(int a,int b){
    int x;
    x = a+b;
    return x;
}
int sub(int a,int b){
    int x;
    x = a-b;
    return x;
}
