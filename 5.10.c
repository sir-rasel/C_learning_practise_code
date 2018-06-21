#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,d;
    float x1,x2,x;
    printf("Enter the value of a: \n");
    scanf("%f",&a);
    printf("Enter the value of b: \n");
    scanf("%f",&b);
    printf("Enter the value of c: \n");
    scanf("%f",&c);
    x1= (-b+sqrt(b*b-4*a*c))/(2*a);
    x2= (-b-sqrt(b*b-4*a*c))/(2*a);
    d=(b*b)-(4*a*c);
    if(a==0 && b==0){
        printf(" There is no solution of the quadratic equation");
    }
    else if(a==0){
        x=-c/b;
        printf(" There is only one root of the equation, x= %f",x);
    }else if(d<0){
        printf("The roots are imaginary and as follows: \n");
    }else{
        x1= (-b+sqrt(d))/(2*a);
        x2= (-b-sqrt(d))/(2*a);
        printf("The roots are real\n");
        printf("x1=%f\nx2=%f",x1,x2);
    }
    return 0;
}
