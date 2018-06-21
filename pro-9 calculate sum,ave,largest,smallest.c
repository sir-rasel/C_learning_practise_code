#include <stdio.h>
int main () {
    int a,b,c,sum;
    float ave;
    printf ("Please input the value of a,b & c : ");
    scanf ("%d %d %d",&a,&b,&c);
    sum=a+b+c;//add numbers
    ave=sum/3.0;//find average
    printf ("Sum of those number is : %d\n",sum);
    printf ("Average of those number is : %.2f\n",ave);
    //Calculating large number
    if (a>b && a>c){
        printf ("A is large\n");
    }
    else {
        if (b>c){
            printf ("B is large\n");
        }
        else {
            printf ("C is large\n");
        }
    }
    //Calculating small number
    if (a<b && a<c){
        printf ("A is small\n");
    }
    else {
        if (b<c){
            printf ("B is small\n");
        }
        else {
            printf ("C is small\n");
        }
    }
    return 0;
}
