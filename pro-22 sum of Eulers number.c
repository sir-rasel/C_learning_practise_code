#include <stdio.h>
#include <math.h>
long long int fact(int a);
int main (){
    int i,n;
    long long int factorial;
    double sum=0;
    printf ("Please input the value of n : ");
    scanf ("%d",&n);
    for (i=0;i<=n;i++){//adding eulers number
        factorial = fact(i);//function call
        sum+= 1.0/factorial;
    }
    printf ("The sum of exponential series is : %.2lf",sum);
    return 0;
}
long long int fact(int a){//define function of factorial
    int i;
    long long int sum=1;
    for (i=0;i<=a;i++){
        if (i==0){
            sum = 1;
        }
        else {
            sum*=i;
        }
    }
    return sum;
}
