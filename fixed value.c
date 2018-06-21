#include <stdio.h>
#include <math.h>
int main () {
    float a,b;
    a=345.6789;
    b=fabs(a);
    printf ("%.2f\n",b);
    printf ("%.5f\n",b);
    printf ("%.f\n",b);

    return 0;
}
