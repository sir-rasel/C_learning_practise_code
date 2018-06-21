#include<stdio.h>
int main(){
    int a[100][100]={0},i,j,k;
    for(i=0;i<10;i++){
        a[i][0]=1;
        a[i][i]=1;
        for(j=1;j<i;j++){
            a[i][j]=a[i-1][j-1]+a[i-1][j];
        }
    }
    for(i=0;i<10;i++){
        for(k=10;k>i;k--){
            printf("  ");
        }
        for(j=0;j<=i;j++){
            printf("%3d ",a[i][j]);
        }printf("\n");
    }
    return 0;
}
