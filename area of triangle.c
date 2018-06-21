#include <stdio.h>
#include <math.h>
int main (){
    float a,b,c,s,d,area;
    a=3;
    b=4;
    c=5;
    s=(a+b+c)/2;
    d = (s*(s-a)*(s-b)*(s-c));
    area = sqrt(d);
    printf ("%.2f",area);



    return 0;
}
