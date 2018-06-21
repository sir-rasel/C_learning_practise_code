#include <stdio.h>
int main()
{
    float fah,c;
    printf("Enter the celcious :\n");
    scanf("%f",&c);
    fah = (9*c)/5+32;
    printf("The Value of farenhit is : %.2f\n",fah);
    return 0;
}
