#include<stdio.h>
int main(){
    int sum=0,i,a=0;
    for(i=0;i<=100;i++){
        if(i%6==0&&i%4!=0){
            a++;
            sum+=i;
        }
    }
    printf("The number of integers that are divisible by 6\nbut not divisible by 4, lied between 0-%d.\n%d\nTheir sum is\n%d",i-1,a,sum);
    return 0;
}
