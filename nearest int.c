#include <stdio.h>
#include <math.h>
int main () {
    float x;
    int a,b;
    scanf ("%f",&x);
    a=floor(x);
    b=ceil(x);
    printf ("%d %.3f %d",a,x,b);
    return 0;
}
