#include <stdio.h>
void product(int a[30][30],int b[30][30], int z[30][30], int m, int n);//prototype declare
int main () {
    int x[30][30],y[30][30],z[30][30],m,n,i,j;
    printf ("Please input the value of m and n : ");
    scanf ("%d %d",&m,&n);
    printf ("Please input the value of Array X of m by n : \n");
    for (i=0;i<n;i++){//assign value into array x
        for (j=0;j<m;j++){
            scanf ("%d",&x[i][j]);
        }
    }
    printf ("Please input the value of Array Y of n by m : \n");
    for (i=0;i<m;i++){//assign value into array y
        for (j=0;j<n;j++){
            scanf ("%d",&y[i][j]);
        }
    }
    printf ("Multiplication result is : \n");
    product(x, y, z, m, n);//function call
    for (i=0;i<n;i++){//print array z
        for (j=0;j<m;j++){
            printf ("%d ",z[i][j]);
        }
        printf ("\n");
    }
    return 0;
}

void product(int a[30][30],int b[30][30], int z[30][30], int m, int n){//define function
    int i,j,k;
    for (i=0;i<n;i++){
        for (j=0;j<m;j++){
            z[i][j]=0;
            for (k=0;k<m;k++) {
                z[i][j]+=(a[i][k] * b[k][j]);
            }
        }
    }
}
