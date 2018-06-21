#include <stdio.h>

int main(){
    int j,n,m,k,l;
    int i;
    scanf("%d",&n);
    m=n;
        for(i=0;n;n/=10,i++); //calculate digit
        printf("%d\n",i);
        int a[i]; //declare array
        for(j=i-1;j>=0;j--){ //assign value into array
            a[j]=m%10;
            m=m/10;
        }
        k=0;
        for (l=0;l<i;l++){//line print
            for(j=k;j<i;j++){ //digit without first digit print
                printf("%d",a[j]);
            }
            k++;
            printf("\n");
           }
    return 0;
}
