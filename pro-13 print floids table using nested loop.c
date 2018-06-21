#include <stdio.h>
int main () {
    int i,j=1,n=1,line;
    printf ("Please input the line number : \n");
    scanf ("%d",&line);
    for (i=1;i<=line;i++){//control line print
        for (j=0;j<i;j++){//control element print per line
            printf ("%d ",n++);
        }
        printf ("\n");
    }
    return 0;
}
