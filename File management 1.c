#include <stdio.h>
int main(){
    char arr[30];
    FILE *p,*q;
    p = fopen("INPUT.txt","w");
    q = fopen("INPUT.txt","r");
    printf("Please input data : ");
    gets(arr);
    fprintf(p,"%s",arr);
    fscanf(q,"%[^\n]",arr);
    printf("%s",arr);
    fclose(p);
    fclose(q);
    return 0;
}
