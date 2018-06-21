#include <stdio.h>

int main() {

    int a,b,c;
    scanf ("%d %d",&a,&b);
    if (a>=0 && a<=24 && b>=0 && b<=24) {
        if (a>b) {
            c=(24-a)+b;
            printf ("O JOGO DUROU %d HORA(S)",c);
        }
        else if (b>a) {
            c=b-a;
             printf ("O JOGO DUROU %d HORA(S)",c);
        }
        else {
            c=(24-a)+b;
            printf ("O JOGO DUROU %d HORA(S)",c);
        }
    }
    return 0;
}
