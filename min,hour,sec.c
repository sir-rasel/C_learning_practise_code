#include <stdio.h>

int main() {

    int year,month,days,x,m;
    scanf ("%d",&x);
    days = x%30;
    m = x/30;
    month = m%12;
    year = m/12;
    printf ("%d ano(s)\n%d mes(es)\n%d dia(s)\n",year,month,days);


    return 0;
}
