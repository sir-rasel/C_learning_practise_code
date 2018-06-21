#include <stdio.h>
int main(){
    int a,i,j,count=0,n;
    scanf("%d %d",&i,&j);
    i=n;
    for(a=n;a<=j;a++,n++){
        for(a;;){
            count++;
            if(a==1) break;
            if(a%2==0) i/=2;
            else a=3*a+1;
        }
    }
    printf ("%d %d %d\a",i,j,count);
    return 0;
}
