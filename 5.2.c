#include<stdio.h>

int main(){
    int a=100,b=0,i=0;
    while(a<200){
        a++;
        if(a%7==0){
        b+=a;
        i++;
        }
    }
    printf("The number of integers divisible by '7' is %d \nThe sum is %d",i,b);
    return 0;
}
