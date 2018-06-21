#include<stdio.h>
int main(){
    float x;
    int y;
    scanf("%f",&x);
    y=x;
    if(y<0){
            y=1;
            printf("When x = %.0f then y = %d",x,y);
    }else if(y>0){
            y=-1;
            printf("When x = %.0f then y = %d",x,y);
    }else{
        printf("When x = %.0f then y = 0",x);
    }
    return 0;
}
