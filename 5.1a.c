#include<stdio.h>

int main(){
    int a;
    printf("Give a numeric input.\n");
    scanf("%d",&a);
    a=a%2;
    if(a==0){
        printf("NUMBER IS EVEN");
    }else if(a==1){
        printf("NUMBER IS ODD");
    }
    return 0;
}
