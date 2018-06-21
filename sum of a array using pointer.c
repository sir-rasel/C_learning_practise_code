#include <stdio.h>
int main(){
    int arr[10],*p=arr,i,sum=0;
    printf("Please input the element of array: ");
    for(i=0;i<10;i++){
        scanf("%d",p);
        p++;
    }
    for(i=0,p--;i<10;i++,p--){
        sum+=*p;
    }
    printf("Sum = %d",sum);
    return 0;
}
