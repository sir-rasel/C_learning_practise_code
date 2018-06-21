#include <stdio.h>

int main(){
    int j,n,m,k,o;
    int i;
    scanf("%d",&n);
    m=n;
        for(i=1;n=n/10;i++); //calculate digit
        int a[i]; //declare array
        for(j=i-1;j>=0;j--){ //assign value into array
            a[j]=m%10;
            m=m/10;
        }
        k=0;
        for (o=0;o<i;o++){//line print
            for(j=k;j<i;j++){ //digit without first digit print
                printf("%d",a[j]);
            }
            k++;
            printf("\n");
           }
    return 0;
}
