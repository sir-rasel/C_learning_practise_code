#include <stdio.h>
int main (){
    long long int n,i,sum=1;
    scanf ("%lld",&n);
    for (i=1;i<=n;i++){
        if (n==0){
            sum=1;
        }
        else {
        sum*=i;
        }
    }
    printf ("%lld",sum);
    return 0;
}
