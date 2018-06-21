#include <stdio.h>

int main() {
    int arr[]={1,2,3,7,8,9,11};
    int insert=10,i,n=7,k=4;
    printf("The original element of array: \n");
    for(i=0;i<n;i++){
        printf("arr[%d]=%d\n",i,arr[i]);
    }
    for(i=n;i>=k;i--){
        arr[i]=arr[i-1];
    }
    arr[k]=insert;

    printf("%d %d\n",n,k);

    printf("The array after insertion : \n");
    for (i=0;i<=n;i++){
        printf("arr[%d]=%d\n",i,arr[i]);
    }
    return 0;
}
