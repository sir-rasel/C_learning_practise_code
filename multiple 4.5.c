#include <stdio.h>
int main (){
    int a,b,c,d,e,f,g;
    scanf ("%d %d",&a,&b);
    c=b%10;
    d=b/10;
    e=c*a;
    f=d*a;
    g=e+f;
    printf ("       %6d\n",a);
    printf ("       *%5d\n.................\n",b);
    printf ("%d*%d is %6d\n",c,a,e);
    printf ("%d*%d is %6d\n..................\n",d,a,f);
    printf ("Add item%6d\n",g);


    return 0;
}
