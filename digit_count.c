#include <stdio.h>
int coun(int num);
int main(){
    int t,num,count;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&num);
        count=coun(num);
        printf("%d\n",count);
    }
    return 0;
}
int coun(int num){
    int count=0,i;
    for(i=0;num;i++){
        num/=10;
    }
    if(i==0) return 1;
    else return i;
}
