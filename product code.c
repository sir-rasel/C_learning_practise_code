#include <stdio.h>

int main() {

    int X,Y;
    float z;
    scanf ("%d %d",&X,&Y);
    if (X==1) {
        z = Y*4.00;
        printf ("Total: R$ %.2f\n",z);
    }
    else if (X==2) {
        z = Y*4.50;
        printf ("Total: R$ %.2f\n",z);
    }
    else if (X==3) {
        z = Y*5.00;
        printf ("Total: R$ %.2f\n",z);
    }
    else if (X==4) {
        z = Y*2.00;
        printf ("Total: R$ %.2f\n",z);
    }
    else {
        z = Y*1.50;
        printf ("Total: R$ %.2f\n",z);
    }

    return 0;
}
