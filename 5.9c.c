#include<stdio.h>
int main(){
    float x,z;
    int y;
    scanf("%f",&x);
    y=x;
    (y<0)? (printf("When x = %.0f then y = 1",x)):(1);
    (y>0)? (printf("When x = %.0f then y = -1",x)):(1);
    (y==0)? (printf("When x = %.0f then y = 0",x)):(1);
    return 0;
}
