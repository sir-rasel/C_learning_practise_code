#include <stdio.h>
int x,y;//declare global variable
int exchange(int a,int b){//function of variable swap
    x=b;
    y=a;
}
int main () {
    x=5,y=7;
    exchange(x,y);//call function
    printf ("The value of x=%d and y=%d",x,y);
    return 0;
}
