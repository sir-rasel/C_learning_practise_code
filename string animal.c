#include <stdio.h>
#include <string.h>
int main () {
    char a[20],b[20],c[20],d[20],e[20],f[20],g[20],h[20],i[20],j[20],k[20],l[20],m[20];
    d[20]= ("vertebrado");
    e[20]= ("ave");
    f[20]= ("carnivoro");
    g[20]= ("onivoro");
    h[20]= ("mamifero");
    i[20]= ("herbivoro");
    j[20]= ("invertebrado");
    k[20]= ("inseto");
    l[20]= ("hematofago");
    m[20]= ("anelideo");
    scanf("%s,a");
    if (a==d[20]) {
            scanf("%s,b");
        if (b==e[20]) {
            scanf("%s,c");
            if (c==f[20]){
                printf ("aguia\n");
            }
            else if (c==g[20]){
                printf ("pomba\n");
            }
        }
        else if (b==h[20]) {
            scanf("%s,c");
            if (c==g[20]){
                printf ("homem\n");
            }
            else if (c==i[20]){
                printf ("vaca\n");
            }
        }
    }
    else if (a==j[20]) {
            scanf("%s,b");
        if (b==k[20]) {
            scanf("%s,c");
            if (c==l[20]){
                printf ("puiga\n");
            }
            else if (c==i[20]){
                printf ("lagarta\n");
            }
        }
        else if (b==m[20]) {
            scanf("%s,b");
            if (c==l[20]){
                printf ("sanguessuga\n");
            }
            else if (c==g[20]){
                printf ("minhoca\n");
            }
        }
    }
    return 0;
}

