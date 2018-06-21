#include <stdio.h>
#include <math.h>
int prime(int n);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(prime(n)) printf("This is a prime number");
    else printf("This is not a prime number");
    return 0;
}
int prime(int n){
    if(n==2) return 1;
    else if (n%2==0) return 0;
    int num=sqrt(n),i;
    for(i=3;i<num;i+=2){
        if(num%i==0) return 0;
    }
    return 1;
}
