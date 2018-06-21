#include <stdio.h>
int main () {
    float num,ave,sum=0;
    int n,i;
    printf ("Please input the number of nth num : ");
    scanf ("%d",&n);
    for (i=0;i<n;i++){//adding nth number
        scanf ("%f",&num);
        sum+=num;
    }
    ave = sum/n;//divide total by nth number
    printf ("The average of nth number is : %.2f",ave);
    return 0;
}
