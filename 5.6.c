#include<stdio.h>
#include<math.h>
int main (){
    float sq,sum,i,j;
    printf("Two-dimentional Square Root Table\n\n");
    for(i=0;i<10;i++){
        for(j=0;j<=1.0;j+=0.1){
                sum=i+j;
                sum=sqrt(sum);
            printf(" %.3f ",sum);
        }
        printf("\n");
    }
    return 0;
}
