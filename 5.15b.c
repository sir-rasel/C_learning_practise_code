#include<stdio.h>
#include<math.h>
int main(){
    double x,val,a;
    char t;
    val=0;
    printf("Enter Angle:--\n");
    scanf("%lf",&x);
    a = 3.14159265 / 180;
    printf("\ns or S for Sin(x) \nc or C for Cos(x) \nt or t for Tan(x)\nEnter Choice ");
    scanf("%s",&t);
    switch(t){
        case 's':
        case 'S': val=sin(x*a); break;
        case 'c':
        case 'C': val=cos(x*a); break;
        case 't':
        case 'T': val=tan(x*a); break;
        default:printf("\nWrong Input\n");
    }
    printf("value: %.2lf\n",val);

    return 0;
}
