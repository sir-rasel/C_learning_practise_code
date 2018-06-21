#include <stdio.h>
int main (){
    int n,i;
    long long int sum=1;
    scanf ("%d",&n);
    for (i=1;i<=n;i++){//calculate factorial of nth number
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
