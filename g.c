#include <stdio.h>

int main() {
    int a,b,i,j,k[500]={},m=0,temp;
    char c[500];
    scanf ("%d %d",&a,&b);
    for (i=0;i<a;i++){
        scanf("%s",c);
    }
    for (i=0;i<a;i++){
        for (j=0;j<=i;j++){
            if (i==j && c[j]=='1') {
                m++;
                k[i]++;
            }
        }
    }
    temp=k[0];
    for (i=1;i<a;i++){
        if(temp<k[i]) temp=k[i];
    }
    printf("%d\n%d\n",m,temp);
    return 0;
}
