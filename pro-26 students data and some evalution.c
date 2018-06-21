#include <stdio.h>
int main () {
    int students[100][4],total[100],i,j,temp,num;
    int ban,eng,math,roll1,roll2,roll3;
    printf ("Please input students number : ");
    scanf ("%d",&num);
    printf ("please input student id and then numbers of Ban,Eng,Math respectively: \n");
    for (i=0;i<num;i++){//define student id & number
        for (j=0;j<4;j++){
            scanf ("%d",&students[i][j]);
        }
    }
    for (i=0;i<num;i++){//assign value to total index by 0
        total[i]=0;
    }
    for (i=0;i<num;i++){//add numbers found by each student
        for (j=1;j<4;j++){
            total[i]+= students[i][j];
        }
    }
    printf ("Total marks : ");
    for (i=0;i<num;i++){//print total numbers
            printf ("%d ",total[i]);
    }
    for (j=1;j<num;j++){//compare and find the highest total
            if (total[j]>total[j-1]){
                temp=students[j][0];
            }
            else {
                temp=students[j-1][0];
            }
    }
    printf ("\nRoll no of highest marks obtained is : %d",temp);
    for (j=1;j<num;j++){//compare and find the highest mark of each sub and roll who obtained it
            if (students[j][1]>students[j-1][1]){//evaluate Bangla
                ban=students[j][1];
                roll1=students[j][0];
            }
            else {
                ban=students[j-1][1];
                roll1=students[j-1][0];
            }
            if (students[j][2]>students[j-1][2]){//evaluate English
                eng=students[j][2];
                roll2=students[j][0];
            }
            else {
                eng=students[j-1][2];
                roll2=students[j-1][0];
            }
            if (students[j][3]>students[j-1][3]){//evaluate Math
                math=students[j][3];
                roll3=students[j][0];
            }
            else {
                math=students[j-1][3];
                roll3=students[j-1][0];
            }
    }
    printf ("\nRoll %d got highest marks in Bangla and it is : %d",roll1,ban);
    printf ("\nRoll %d got highest marks in English and it is : %d",roll2,eng);
    printf ("\nRoll %d got highest marks in Math and it is : %d",roll3,math);
    return 0;
}
