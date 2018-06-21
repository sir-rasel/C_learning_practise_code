#include <stdio.h>
#include <math.h>

int main ()
{
    int x, y, p;
    printf("Enter the base\n");
    scanf("%d",&x);
    printf("Enter the power\n");
    scanf("%d",&y);
    p = pow(x,y);
    printf("The value of P is : %d",p);
    return 0;
}
