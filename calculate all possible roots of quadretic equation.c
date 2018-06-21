#include <stdio.h>
#include <math.h>
int main () {
    int d,a,b,c;
    float x1,x2;
    printf ("Please input the value of a,b & c : ");
    scanf ("%d %d %d",&a,&b,&c);
    if (a==0){//check is that a quadratic equation
        printf ("This is not a quadratic equation");
        return 0;
    }
    d= b*b-4*a*c;
    if(d>0){//calculate two real roots
        x1= ((-1)*(b)+sqrt(d))/(2*a);
        x2= ((-1)*(b)-sqrt(d))/(2*a);
        printf ("The two real roots are x1= %.2f & x2= %.2f",x1,x2);
    }
    else if (d==0){//calculate only one root
        x1=(-1)*b/(2.0 * a);
        printf ("The only one root is x=%.2f",x1);
    }
    else {//calculate two imaginary roots
        x1=(-1)*b/(2.0*a);
        x2= sqrt(-d)/(2*a);
        printf ("The two imaginary roots are x1= %.2f + %.2f i and x2= %.2f - %.2f i",x1,x2,x1,x2);
    }
    return 0;
}
