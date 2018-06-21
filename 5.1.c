#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    a=a%2;
    if(a==0){
        printf("NUMBER IS EVEN");
    }else{
        printf("NUMBER IS ODD");
    }
    return 0;
}
