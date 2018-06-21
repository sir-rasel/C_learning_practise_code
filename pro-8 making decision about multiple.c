#include <stdio.h>
int main () {
    int m,n;
    printf ("Please input the value of m and n : ");
    scanf ("%d %d",&m,&n);
    if (m%n==0){//check multiple or not
        printf ("M is multiple of N");
    }
    else {
        printf ("M is not multiple of N");
    }
    return 0;
}
