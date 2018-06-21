#include <stdio.h>
#include <string.h>
int main(){
    char arr[]="saiful",tmp;
    int i,j;
    j=strlen(arr)-1;
    for(i=0;i<strlen(arr) && i<j;i++,j--){
        tmp=arr[i];
        arr[i]=arr[j];
        arr[j]=tmp;
    }
    printf("%s",arr);
    return 0;
}
