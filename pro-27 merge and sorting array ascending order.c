#include <stdio.h>
int main () {
    int a[10],b[10],c[30],i,n,m,o,temp,j=0,k=1;
    printf ("Please input the size of Array A : ");
    scanf ("%d",&n);
    printf ("Please input the element of Array A : ");
    for (i=0;i<n;i++){//assign array a
        scanf ("%d",&a[i]);
    }
    printf ("Please input the size of Array B : ");
    scanf ("%d",&m);
    printf ("Please input the element of Array B : ");
    for (i=0;i<m;i++){//assign array b
        scanf ("%d",&b[i]);
    }
    o=n+m;
    for (i=0;i<o;i++){//merge array a and b in c
        if(i<n){
            c[i]=a[i];
            continue;
        }
        c[i]=b[j];
        j++;
    }
    for (i=0;i<o-1;i++){//arrange ascending order
        for (j=k;j<o;j++){
            if (c[i]>c[j]){
                temp=c[j];
                c[j]=c[i];
                c[i]=temp;
            }
        }
        k++;
    }
    for (i=0;i<o;i++){//print ascending array c
        printf ("%d ",c[i]);
    }
    return 0;
}
