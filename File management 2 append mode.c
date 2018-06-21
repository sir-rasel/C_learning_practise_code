#include <stdio.h>
int main(){
    char arr[30];
    FILE *p,*q;
    p = fopen("in.txt","r");
    q = fopen("in1.txt","a");
    fscanf(p,"%[^\n]",arr);
    fprintf(q,"%s",arr);
    fclose(p);
    fclose(q);
    return 0;
}
