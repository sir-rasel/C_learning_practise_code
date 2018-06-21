#include <stdio.h>
int main () {
    int n,i,a=0,b=0;
    for (i=0;n;i++) {
        scanf ("%d",&n);
        if (n<0) a++;
        else if (n>=0) b++;
        //else break;
    }
    printf ("The number positive number : %d\n",b);
    printf ("The number negative number : %d",a);
    return 0;
}
