#include <stdio.h>
#include <math.h>
int main () {
    int n;
    float value;
    printf ("Please input the number : ");
    scanf ("%d",&n);
    value = sin(n);
    printf ("%.2f\n",value);
    value = cos(n);
    printf ("%.2f\n",value);
    return 0;
}
