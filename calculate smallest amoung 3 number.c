#include <stdio.h>
int main () {
    int a,b,c;
    printf ("Please input the value of a,b & c : ");
    scanf ("%d %d %d",&a,&b,&c);
    if (a<b && a<c){
        printf ("A is small\n");
    }
    else {
        if (b<c){
            printf ("B is small\n");
        }
        else {
            printf ("C is small\n");
        }
    }
    return 0;
}
