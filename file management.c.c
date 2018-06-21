#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *p,*q;
    char str[100],c;
    p = fopen("new.txt","w");
    gets(str);
    fprintf(p,"%s",str);
    fclose(p);

    p=fopen("new.txt","r");
    fscanf(p,"%s",str);
    printf("%s\n",str);
    fclose(p);

    p=fopen("new.txt","r");
    q=fopen("new1.txt","w");
    fscanf(p,"%s",str);
    fprintf(q,"%s\n",str);
    fclose(p);
    fclose(q);

    p=fopen("new.txt","r");
    while(putc("%c",&c,p)!=EOF){

    }
    q=fopen("new1.txt","w");
    fscanf(p,"%s",str);
    fprintf(q,"%s\n",str);
    fclose(p);
    fclose(q);

    return 0;
}
