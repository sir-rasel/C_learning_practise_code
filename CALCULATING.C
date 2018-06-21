#include <stdio.h>
int main (){
    float x,y,a,b,c;
    scanf ("%f %f",&x,&y);
    a=((x+y)/(x-y));
    b=((x+y)/2);
    c=((x+y)*(x-y));
    printf ("%.2f %.2f %.2f",a,b,c);
    return 0;
}
