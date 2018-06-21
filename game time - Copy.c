#include <stdio.h>

int main() {

    int a,b,c,d,e,f;
    scanf ("%d %d %d %d",&a,&b,&c,&d);
    if (a>=0 && a<=24 && c>=0 && c<=24 && b>=1 && b<=59 && d>=1 && d<=59) {
        if (a<c && d<b) {
            f= (d+60)-b;
            e=(c-(a+1));
            printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",e,f);
        }
        else if (a<c && d>b) {
            f= d-b;
            e=c-a;
           printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",e,f);
        }
        else if (a>c && d>b) {
            f= d-b;
            e= (24-a)+c;
            printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",e,f);
        }
         else if (a>c && d<b) {
            f= (d+60)-b;
            e= (24-(a+1))+c;
            printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",e,f);
        }
        else if (a<c && d<b) {
            f= (d+60)-b;
            e= c-(a+1);
            printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",e,f);
        }
        else if (a<c && d>b) {
            f= d-b;
            e= c-a;
            printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",e,f);
        }
        else {
            f= d-b;
            e= (24-a)+c;
             printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",e,f);
        }
    }
    return 0;
}

/*7 8 9 10
O JOGO DUROU 2 HORA(S) E 2 MINUTO(S)
7 7 7 7
O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)
7 10 8 9
O JOGO DUROU 0 HORA(S) E 59 MINUTO(S)*/

