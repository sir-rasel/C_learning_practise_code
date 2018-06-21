#include <stdio.h>

int main() {
    int i,n;
    long long int a[1000],sum=0;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%lld",&a[i]);
        sum+=a[i];
    }
    printf ("%lld",sum);
    return 0;
}
