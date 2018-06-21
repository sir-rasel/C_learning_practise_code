#include <stdio.h>
int main () {
    int num;
    printf ("Please input the number : ");
    scanf ("%d",&num);
    if (num%2==0){//check number is even or not
        printf ("The number %d is even",num);
    }
    else {
        printf ("The number %d is odd",num);
    }
    return 0;
}
