#include<stdio.h>
int main(){
    int i,j,k=1;
    for(i=0;i<=5;i++){
        for(j=0;j<i;j++){
                k=j+i;
            printf("%d ",k%2);
        }
        printf("\n");
    }
    return 0;
}
