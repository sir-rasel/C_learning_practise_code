#include <stdio.h>
int main () {
    //freopen("in.txt","r",stdin);
    int a[3][3],b[3][3],c[3][3];
    int i,j,k;
    printf ("Input Array A : \n");
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            scanf ("%d",&a[i][j]);
        }
    }
    printf ("Input Array B : \n");
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            scanf ("%d",&b[i][j]);
        }
    }
    printf ("The value of Matrix multiple : \n");
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            c[i][j]=0;
        }
    }
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            for (k=0;k<3;k++) {
            c[i][j]+=(a[i][k]*b[k][j]);
            }
        }
    }
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf (" %4d ",c[i][j]);
        }
        printf ("\n");
    }

    return 0;
}
