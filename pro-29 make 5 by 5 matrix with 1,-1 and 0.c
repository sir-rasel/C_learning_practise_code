#include <stdio.h>
int main () {
    int a[5][5],i,j,k=4;
    printf ("Please input the value of Matrix : \n");
    for (i=0;i<5;i++){
        for (j=0;j<5;j++){
            scanf ("%d",&a[i][j]);
        }
    }
    printf ("The Matrix is : \n");
    for (i=0;i<4;i++){//managing upper left triangle with +1
        for (j=0;j<k;j++){
            a[i][j]=1;
        }
        k--;
    }
    k=4;
    for (i=0;i<5;i++){//managing diagonal with 0
        for (j=0;j<5;j++){
            if (j==k){
                a[i][j]=0;
            }
        }
        k--;
    }
    k=4;
    for (i=1;i<5;i++){//managing lower right triangle with -1
        for (j=0;j<5;j++){
            if (j>=k){
                a[i][j]= -1;
            }
        }
        k--;
    }
    for (i=0;i<5;i++){//display the 5*5 matrix
        for (j=0;j<5;j++){
            printf (" %2d ",a[i][j]);
        }
        printf ("\n");
    }
    return 0;
}
