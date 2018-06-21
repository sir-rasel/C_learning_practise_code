#include <stdio.h>
int main () {
    float x;
    int a,b,c,d;
    scanf ("%f",&x);
    a=x;
    b=a%10;
    d=a/10;
    c=d%10;
    printf ("%d %d",b,c);

    return 0;
}
