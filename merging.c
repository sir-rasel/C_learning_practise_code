#include <stdio.h>
int main(){
    int a[5],b[5],c[10],i,j;
    printf("Enter A element: ");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter B element: ");
    for(i=0;i<5;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(a[i]==b[j]){
                b[j]=0;
            }
        }
    }
    for(i=0;i<10;i++){
        if(i<5){
            c[i]=a[i];
        }
        else{
            c[i]=b[i-5];
        }
    }
    printf("C element: ");
    for(i=0;i<10;i++){
        if(c[i]!=0)
        printf("%d ",c[i]);
    }
    return 0;
}
