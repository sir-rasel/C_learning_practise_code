#include <stdio.h>
int main ()
{
    int a,b,c;
    printf ("Please Enter three different value : ");
    scanf("%d %d %d",&a,&b,&c);
        if(a>b || a>c){
            printf("A is Big");
        }

        else {
            if (b>c){
                printf ("B is Big");
            }
            else {
                printf ("C is Big");
            }
        }
    return 0;
}
