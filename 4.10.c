#include <stdio.h>
int main () {
    char a[20],b[20];
    int c,d;
    float e,f;
    scanf ("%s %s %d %d %f %f",a,b,&c,&d,&e,&f);
    printf ("Name\tCode\tPrice\n");
    printf ("%s\t%d\t%.2f\n",a,c,e);
    printf ("%s\t%d\t%.2f",b,d,f);

    return 0;
}
