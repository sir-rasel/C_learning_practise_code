#include <stdio.h>
int main() {
    int a[10],b[10]={},c[10],i,j,k=1,temp1,temp2;
    printf ("Please input ten integer number: \n");
    for (i=0;i<10;i++){
        scanf ("%d",&a[i]);
    }
    temp1=temp2=a[0];
    for (i=1;i<10;i++){
        if (temp1<a[i]) temp1=a[i];
        if (temp1>a[i]) temp2=a[i];
    }
    printf ("Maximum value = %d\nMinimum value = %d\n",temp1,temp2);
    for(i=0;i<10;i++){
            c[i]=a[i];
        for(j=k;j<10;j++){
            if (a[i]==a[j]) b[i]++;
        }
    }
    temp1=b[0];
    temp2=c[0];
    for (i=i;i<10;i++){
        if (temp1<b[i]){
            temp1=b[i];
            temp2=c[i];
        }
    }
    printf ("Maximum number of a single digit : %d\n",temp1+1);
    printf ("Most number occurs is : %d",temp2);
    return 0;
}
