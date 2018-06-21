#include <stdio.h>
int main(){
    int num,i=0;
    char arr[100];
    printf("Please input the number: ");
    scanf("%d",&num);
    if(num==0){
        printf("The binary number is: 0");
    }
    while(num){
        arr[i]=num%2;
        num=num/2;
        i++;
    }
    printf("The binary number is: ");
    for(i--;i>=0;i--){
        printf("%d",arr[i]);
    }
}
