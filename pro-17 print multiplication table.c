#include <stdio.h>
int main () {
    int a[11][11],i,j;
    for (i=1;i<=10;i++){//multiplying array
        for (j=1;j<=10;j++){
            a[i][j]= i*j;
        }
    }
    for (i=1;i<=10;i++){//display result of multiplying
        for (j=1;j<=10;j++){
            printf ("%3d ",a[i][j]);
        }
        printf ("\n");
    }

    return 0;
}
