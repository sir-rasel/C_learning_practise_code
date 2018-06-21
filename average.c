#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    float average;
    printf ("Give 5 input\n");
    scanf("%d\n",&a);
    scanf("%d\n",&b);
    scanf("%d\n",&c);
    scanf("%d\n",&d);
    scanf("%d",&e);
    average = (float)(a+b+c+d+e)/5;
    printf("The Average of those number is : %.2f",average);

    return 0;
}
