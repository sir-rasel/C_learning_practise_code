#include <stdio.h>
#include <math.h>
int main (){
    float a;
    int b,c,i,j;
    scanf ("%f",&a);
    b=floor(a);
    c=b-1;
    for (i=0;i<c;i++) {
        for (j=1;j<=b;j++){
            printf (" * ");
        }
        if (i==c-2) printf ("%.2f",a);
        printf ("\n");
    }
    return 0;
}
