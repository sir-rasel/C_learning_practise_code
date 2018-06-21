#include <stdio.h>
int main () {
    int a[5][5]={},i,j;
    for (i=0;i<5;i++){
        for (j=0;j<5;j++){
            if(i==j) a[i][j]=1;
        }
    }
    printf ("The Matrix after initialize : \n");
    for (i=0;i<5;i++){//display the 5*5 matrix
        for (j=0;j<5;j++){
            printf (" %2d ",a[i][j]);
        }
        printf ("\n");
    }
    return 0;
}
