#include <stdio.h>
#include <math.h>

int main (){
    int n,a,b,c,j;
    scanf ("%d",&n);
    a=digit(n);
    //printf ("%d\n",a);
    c=10;
    printf ("%d\n",n);
    for (j=0;n;j++){
            a--;
        b=pow(c,a);
       // printf ("%d\n",b);
        n%=b;
        if (n!=0) printf ("%d\n",n);
        else break;
    }
    return 0;
}

int digit(int n){
    int i;
    for (i=0;n;i++){
        n/=10;
    }
    return i;
}
