#include<stdio.h>
int main (){
    float a,b,c,d,m,n,sub;
    float x1,x2;
    printf("Enter the value of a, b, c, d, m, n: \n");
    scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&m,&n);
    sub=(a*d-c*b);
    if(sub!=0){
        x1=(m*d-b*n)/sub;
        x2=(n*a-m*c)/sub;
        printf("\n The value of x1= %f \n The value of x2= %f",x1,x2);
    }
    else{
        printf("The division is not possible and result is an undefined value. ");
    }
    return 0;
}
