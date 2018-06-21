#include <stdio.h>
#define pi 3.1416
int main () {
    typedef int x;
    float z;
    const x y=10;
    z=pi*y;
    printf ("%d \n%.2f",y,z);
    return 0;
}
