#include <stdio.h>
int main ()
{
    char x;
    scanf ("%c",&x);
    isalnum(x)? printf("Ok\n") : printf ("Not Ok\n");
    isalpha(x)? printf("Ok\n") : printf ("Not Ok\n");
    islower(x)? printf("Ok\n") : printf ("Not Ok\n");
    isupper(x)? printf("Ok\n") : printf ("Not Ok\n");
    isprint(x)? printf("Ok\n") : printf ("Not Ok\n");
    ispunct(x)? printf("Ok\n") : printf ("Not Ok\n");
    isspace(x)? printf("Ok\n") : printf ("Not Ok\n");
    isdigit(x)? printf("Ok\n") : printf ("Not Ok\n");
    return 0;
}
