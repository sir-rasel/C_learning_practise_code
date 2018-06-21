#include <stdio.h>
int main () {
    char a[20],b[15];
    scanf("%[^P]%s",a,b);
    printf ("%s %s\n",a,b);
    printf ("%s\n%s\n",a,b);
    printf ("%.1s.%.1s.",a,b);
    return 0;
}
