#include <stdio.h>
int main () {
    int x,y,z,a;
    scanf ("%d %d %d",&x,&y,&z);
    a=x;
    x=y;
    y=z;
    z=a;
    printf ("%d %d %d",x,y,z);
    return 0;
}
