#include <stdio.h>
#include <string.h>
int main () {
    char ans[30],name[30]="Dennis Ritchie";
    int i;
    for (i=0;i<3;i++){
        printf ("Who is the inventor of C ? \n");
        gets(ans);
        //scanf ("%[^\n]",ans);
        //getchar();
        if (strcmp(name,ans)==0){//check the answer
            printf ("good");
            return 0;
        }
        else {
            if (i==2){//display the correct answer in third time
                printf ("Correct Answer is : Dennis Ritchie");
                return 0;
            }
            printf ("try again\n");
        }

    }
    return 0;
}
