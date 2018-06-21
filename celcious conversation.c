#include <stdio.h>
int main ()
{
    float cel,fah;
    printf("Enter A Farenhite Value :\n");
    scanf ("%f",&fah);
    cel = (((fah-32)/9)*5);//calculating by theory
    printf ("The Celcious Value is : %.2f",cel);
    return 0;
}
