#include <stdio.h>
int main () {
    int i,j=0,sum=0;
    for (i=101;i<200;i++){
        if (i%7==0){//find number divisible by 7 and add them
            j++;
            sum+=i;
        }
    }
    printf ("The number which is divisible by 7 is : %d\n",j);
    printf ("The sum of those number which are 7 is : %d",sum);
}
