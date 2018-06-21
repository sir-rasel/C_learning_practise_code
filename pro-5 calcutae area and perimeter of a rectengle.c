#include <stdio.h>
int main () {
    float len,wid,area,perimeter;
    printf ("Please input the length and width of rectangle : \n");
    scanf ("%f %f",&len,&wid);
    area = len*wid;//calculating area
    perimeter = 2*(len+wid);//calculating perimeter
    printf ("Area of this rectangle is : %.2f\n",area);
    printf ("Perimeter of this rectangle is : %.2f",perimeter);
    return 0;
}
