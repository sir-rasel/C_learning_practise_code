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
    if(t=='s' || t=='S'){
        val=sin(x*a);
    }
    if(t=='c' || t=='C'){
        val=cos(x*a);
    }
    if(t=='t' || t=='T'){
        val=tan(x*a);
    }
    printf("value: %lf\n",val);

    return 0;
}
