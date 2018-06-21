#include <stdio.h>
int main () {
    int a,b,c,m,i;
    a=1,b=1;
    printf ("Please input mth number : \n");
    scanf ("%d",&m);
    printf ("%d %d",a,b);
    for (i=2;i<m;i++)  {
            c=a+b;
            a=b;
            b=c;
            printf (" %d",c);
    }
    return 0;
}
