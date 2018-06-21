#include <stdio.h>
int main () {
    int n,i;
    float sum=0;
    printf ("Please input the value of n : ");
    scanf ("%d",&n);
    for (i=1;i<=n;i++){
        sum+=1.0/i;//adding harmonic serious
    }
    printf ("Thu sum of this harmonic series is : %.2f",sum);
    return 0;
}
