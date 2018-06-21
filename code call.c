#include <stdio.h>
int main () {
    int price,code,call;
    float bill,plus;
    plus=1.25;
    scanf ("%d %d",&code,&call);
    if (call>100) {
        call=call-100;
        bill=250+(call*plus);
        printf ("%d bill is=%.2f",code,bill);
    }
    else {
        bill=250;
        printf ("%d bill is=%.2f",code,bill);
    }
    return 0;
}
