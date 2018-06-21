#include<stdio.h>
typedef struct{
    char roll [10],name[30],dept[5];
    float gpa;
}student;
int main(){
    student students[100];
    int i,j,k=0;
    printf ("Please input students informations Roll/Name/Department/GPA respectively: \n");
    for (i=0;i<3;i++){
        gets(students[i].roll);
        gets(students[i].name);
        gets(students[i].dept);
        scanf ("%f",&students[i].gpa);
        getchar();
    }
    printf ("Students information is : \n");
    for (i=0;i<3;i++){
        printf ("Roll: %s\nName: %s\nDepartment: %s\nGPA: %.2f\n",students[i].roll,students[i].name,students[i].dept,students[i].gpa);
    }
    printf ("Display students information ascending form: \n");
    student temp;
    for (i=1;i<3;i++){
        for (j=k;j<3;j++){
            if (students[i].gpa>students[j].gpa){
                temp=students[j];
                students[j]=students[i];
                students[i]=temp;
                continue;
            }
        }
        k++;
    }
    for (i=0;i<3;i++){
             printf ("Roll: %s\nName: %s\nDepartment: %s\nGPA: %.2f\n",students[i].roll,students[i].name,students[i].dept,students[i].gpa);
    }
    return 0;
}
