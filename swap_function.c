#include <stdio.h>
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a=5,b=6;
    printf("Before swap: %d %d\n",a,b);
    swap(&a,&b);
    printf("After swap: %d %d\n",a,b);
    return 0;
}
