#include <stdio.h>
#include <math.h>
int main () {
    int n;
    float x,y;
    printf ("Please input the value of x : ");
    scanf ("%f",&x);
    printf ("Please input the value of power n : ");
    scanf ("%d",&n);
    if (n<0){//check n is positive or not
        printf ("Undefined Value");
    }
    else {//define y=x^n equation
        y=(float)pow(x,n);
    }
    printf ("The evaluate value of Y is : %.2f",y);
    return 0;
}
