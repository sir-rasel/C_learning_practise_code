#include <stdio.h>
int main() {
    int n,i;
    long long int a,sum=0;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%lld",&a);
        sum+=a;
    }
    printf ("%lld",sum);
    return 0;
}
