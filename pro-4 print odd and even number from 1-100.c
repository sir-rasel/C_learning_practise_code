#include <stdio.h>
int main () {
    int i;
    printf ("The even number is : \n");
    for (i=1;i<=100;i++){//check even number
        if (i%2==0){
            printf ("%d ",i);
        }
    }
    printf ("\nThe odd number is : \n");
    for (i=1;i<=100;i++){//check odd number
        if (i%2!=0){
            printf ("%d ",i);
        }
    }
    return 0;
}
