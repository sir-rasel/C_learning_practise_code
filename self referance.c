#include <stdio.h>
struct self_ref{
    int a;
    struct self_ref *b;
};

int main() {
    typedef struct self_ref ref;
    ref a,b,c;
    a.a=5;
    a.b=&b;
    b.a=10;
    b.b=&c;
    c.a=15;
    printf ("%d %d %d",*a.b,*b.b,c.a);
    return 0;
}
