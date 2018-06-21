#include<stdio.h>
int main(){
    int a,i,j,c=0;
    for(i=100;i<=200;i++){
        for(j=2;j<=i-1;j++){
            a=i%j;
            if(a==0){
                break;
            }
        }if(i==j){
            c++;
        }
    }
    printf("The number of positive integers that are  prime, lied between 100 and 200\n%d",c);
    return 0;
}
