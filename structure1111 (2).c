#include <stdio.h>
struct student{
    char name[30],roll[10],phone[15];
    int number[11];
};
int main () {
    struct student x;
    int i,total=0;
    printf ("Please input the data of students : \n");
    scanf("%[^\n]",x.name);
    scanf ("%s",x.roll);
    scanf ("%s",x.phone);
    for (i=0;i<11;i++){
        scanf ("%d",&x.number[i]);
        total+=x.number[i];
    }
    printf ("Name : %s\n",x.name);
    printf ("Roll : %s\n",x.roll);
    printf ("Phone : %s\n",x.phone);
    for (i=0;i<11;i++){
        printf ("Number of %d subject is : %d\n",i+1,x.number[i]);
    }
    printf ("Total number is : %d",total);
    return 0;
}
