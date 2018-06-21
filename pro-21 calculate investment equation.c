#include <stdio.h>
#include <math.h>
int main () {
    int p,n;
    float a,v,r;
    printf ("Please input the value of P,R & N : ");
    scanf ("%d %f %d",&p,&r,&n);
    a=1+r;
    v=p*(float)pow(a,n);//calculate investment
    printf ("The investment is : %.2f",v);
    return 0;
}
