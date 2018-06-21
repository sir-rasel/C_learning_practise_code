#include <stdio.h>
int main (){
    int n,i;
    long long int sum=1;
    scanf ("%d",&n);
    if (n==0){
        sum=1;
    }
    else{
        for (i=1;i<=n;i++)  sum*=i;
    }
    printf ("%lld",sum);
    return 0;
}
