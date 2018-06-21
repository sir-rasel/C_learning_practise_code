#include <stdio.h>

int main() {

    double b,c,a;
    scanf ("%lf %lf %lf",&b,&c,&a);
    if (a+b>c && a+c>b && b+c>a && a!=0 && b!=0 && c!=0) {
        if (a>=b+c) {
            printf ("NAO FORMA TRIANGULO\n");
            if (a==b && b==c & c==a){
                printf ("TRIANGULO EQUILATERO\n");
            }
            else if (a==b || b==c || c==a){
                printf ("TRIANGULO ISOSCELES\n");
            }
        }
        else if (a*a==b*b+c*c){
            printf ("TRIANGULO RETANGULO\n");
            if (a==b && b==c & c==a){
                printf ("TRIANGULO EQUILATERO\n");
            }
            else if (a==b || b==c || c==a){
                printf ("TRIANGULO ISOSCELES\n");
            }
        }
        else if (a*a>b*b+c*c){
            printf ("TRIANGULO OBTUSANGULO\n");
            if (a==b && b==c & c==a){
                printf ("TRIANGULO EQUILATERO\n");
            }
            else if (a==b || b==c || c==a){
                printf ("TRIANGULO ISOSCELES\n");
            }
        }
        else if (a*a<b*b+c*c){
            printf ("TRIANGULO ACUTANGULO\n");
            if (a==b && b==c & c==a){
                printf ("TRIANGULO EQUILATERO\n");
            }
            else if (a==b || b==c || c==a){
                printf ("TRIANGULO ISOSCELES\n");
            }
        }
    }
    else {
        printf ("NAO FORMA TRIANGULO\n");
    }
    return 0;
}
