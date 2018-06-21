#include <stdio.h>
int main () {
    int a,b,c,m,i;
    a=1,b=0;
    printf ("Please input mth number : \n");
    scanf ("%d",&m);
    for (i=0;i<m;i++)  {//calculate nth fibbonacci number
            c=a+b;//variable swap
            a=b;
            b=c;
            printf (" %d",c);
    }
    return 0;
}
