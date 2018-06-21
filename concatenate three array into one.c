#include <stdio.h>
#include <string.h>
int main(){
    char fname[30],sname[30],lname[30],name[100];
    printf("Please input the first,second and last name : \n");
    scanf("%s %s %s",fname,sname,lname);
    strcpy(name,fname);
    strcat(name," ");
    strcat(name,sname);
    strcat(name," ");
    strcat(name,lname);
    printf("Name : %s",name);
    return 0;
}
