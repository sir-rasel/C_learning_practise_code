#include <stdio.h>
int main () {
    int i,n,a;
    scanf ("%d",&n);
    for (i=0;n;i++) {
         printf ("%d\n",n);
         n/=10;
    }
    return 0;
}
