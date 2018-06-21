#include <stdio.h>
int res;
int add(int a,int b){
    res = a+b;
    return res;
}
int main() {
    printf ("%d\n",res);
    add(5,6);
    printf ("%d\n",res);
    res++;
    printf ("%d\n",res);
    return 0;
}
