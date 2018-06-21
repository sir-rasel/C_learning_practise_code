#include <stdio.h>
int main () {
    int n,a;
    printf ("Please input the number : ");
    scanf ("%d",&n);
    while (n){//print last digit
        a=n%10;
        printf("%d",a);
        n/=10;
    }
    return 0;
}
