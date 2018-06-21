#include <stdio.h>
#include <math.h>

int main() {
    int t,i,j;
    long long int n,sum=0,p,q,r,s;
    s = ((long long int)pow(10,9)+7);
    scanf ("%d",&t);
    for (i=0;i<t;i++){
        sum=0;
        scanf ("%lld",&n);
        for (j=1;j<=n;j++){
            p = (long long int) pow(j,2);
            q = (j-1);
            r = (long long int) pow(q,2);
            sum+= (p-r);
        }
        sum=sum%s;
        printf ("%lld\n",sum);
    }
    return 0;
}
