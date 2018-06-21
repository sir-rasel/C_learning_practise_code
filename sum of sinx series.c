#include <stdio.h>
#include <math.h>
long long int fact(int a);//prototype declare
int main (){
    int i,x,n,j,k,l=0;
    long long int factorial;
    double sum=0;
    printf ("Please input the value of x : ");
    scanf ("%d",&x);
    printf ("Please input the value of n : ");
    scanf ("%d",&n);
    for (i=1;i<=n;i+=2,l++){//adding sin(x) series
        factorial = fact(i);
        j = pow(x,i);
        k = pow(-1,l);
        sum+= ((float)j/factorial)*k;
    }
    printf ("The sum of exponential series is : %.2lf",sum);
    return 0;
}

long long int fact(int a){//define factorial function
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
