#include <stdio.h>
#include <math.h>
int main () {
    int a;
    float b,c;
    printf ("x(degrees)\tsin(x)\tcos(x)\n");
    for (a=0;a<=180;a+=15) {
        b=sin(a);
        c=cos(a);
        printf ("%d\t\t%.2f\t%.2f\n",a,b,c);
    }
    return 0;
}
