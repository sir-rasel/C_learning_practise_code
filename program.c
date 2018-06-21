#include <stdio.h>
int main() {
    int a[10],b[10]={},c[10],i,j,k=1,temp1,temp2,temp,most;
    printf ("Please input ten integer number: \n");
    for (i=0;i<10;i++){
        scanf ("%d",&a[i]);
    }
    temp1=temp2=a[0];
    for (i=1;i<10;i++){
        if (temp1<a[i]) temp1=a[i];
        if (temp2>a[i]) temp2=a[i];//এখানে temp1>a[i] এর পরিবর্তে temp2>a[i] দিয়েছি
    }
    printf ("Maximum value = %d\nMinimum value = %d\n",temp1,temp2);
    for (i=0;i<10;i++){
        for (j=i;j<10;j++){//এখানে j=k এর পরিবর্তে j=i দিয়েছি
            if (a[i]==a[j]) {
                b[i]++;
                c[i]=a[i];
            }
        }
    }
    temp=b[0];
    for (i=0;i<10;i++){//এখানে i=i এর পরিবর্তে i=0 দিয়েছি
        if (temp<b[i]){
            temp=b[i];
            most=c[i];
        }
    }
    printf ("Most number occurs is : %d",most);
    return 0;
}
