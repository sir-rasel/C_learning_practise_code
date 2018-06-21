#include <stdio.h>
#define PI 3.1416
int main(){
    float r,area,cir;
    printf("Please input the radius of circle: ");
    scanf("%f",&r);
    area=PI*r*r;
    cir=2*PI*r;
    printf("Area is: %.2f\n",area);
    printf("Circumference is: %.2f\n",cir);
    return 0;
}
