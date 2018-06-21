#include <stdio.h>
#include <math.h>
int main () {
    int a;
    float b,c;
    printf ("Number\tSquare root\tSquare\n");
    for (a=0;a<=100;a+=10){
        b=a*a;
        c=sqrt(a);
        printf ("%d\t%.2f\t\t%.2f\n",a,c,b);
    }
    return 0;
}
