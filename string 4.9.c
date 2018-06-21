#include <stdio.h>
int main () {
    char a[20],b[20],c[20];
    scanf ("%s %s %s",a,b,c);
    printf ("%s %.1s. %s\n",a,b,c);
    printf ("%.1s.%.1s. %s\n",a,b,c);
    printf ("%s%.1s.%.1s.\n",c,a,b);
    return 0;
}
