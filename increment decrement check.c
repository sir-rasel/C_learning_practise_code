#include <stdio.h>
int main () {
    int p,q,r;
    p=10;
    q=--p+20;
    r=p++ - 25;
    printf ("%d %d %d",p,q,r);
    p=14;
    q=16;
    r=p%q;
    printf ("\n%d",r);
    return 0;
}
