#include <stdio.h>
int main () {
    int i,count=0,n,limit=1;
    printf ("Please input the line number : \n");
    scanf ("%d",&n);
    n=(n*(n+1))/2;//find value of last element
    for (i=1;i<=n;i++){//control the flow of element
            printf ("%d ",i);
            count++;
            if (count==limit){//control line print
                limit++;
                count=0;
                printf ("\n");
            }
    }
    return 0;
}
