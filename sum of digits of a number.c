#include <stdio.h>
int main () {
    int num,i,sum=0;
    printf ("Please input a integer number : ");
    scanf ("%d",&num);
    for (i=0;num;i++){//find last most digit and these sum
        sum+= num%10;
        num/=10;
    }
    printf ("Sum of the digit of this number is : %d",sum);
    return 0;
}
