#include <stdio.h>
char arr[101];
void sieve(char arr[]);
int check(char arr[],int n);
int main(){
    int t,i,num,count;
    scanf("%d",&t);
    sieve(arr);
    while(t--){
        count=0;
        for(i=0;i<10;i++) {
            scanf("%d",&num);
            count+=(check(arr,num));
        }
        printf("%d\n",count);
    }
    return 0;
}
void sieve(char arr[]){
    int i,j;
    for(i=2;i<=101;i++) arr[i]='1';
    for(i=2;i<=10;i++){
        if(arr[i]=='1'){
            for(j=i;i*j<=101;j++) arr[i*j]='0';
        }
    }
}
int check(char arr[],int n){
    if(arr[n]=='1') return 1;
    else return 0;
}
