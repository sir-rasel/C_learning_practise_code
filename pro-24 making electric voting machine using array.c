#include <stdio.h>
int main () {
    int candidate[7],i,voter,vote;
    for (i=0;i<7;i++){//assign 0 in all array index default
        candidate[i]=0;
    }
    printf ("Please input the voter number : ");
    scanf ("%d",&voter);//taking voter number
    for (i=0;i<voter;i++){//input vote and increment candidate index
        printf ("Please input your vote : ");
        scanf ("%d",&vote);
        if (vote>=1 && vote<=5){
            candidate[vote]++;
        }
        else {
            candidate[6]++;
        }
    }
    printf ("\n\n");
    for (i=1;i<=5;i++){//display the number of vote of every candidate
        printf ("Candidate %d found vote : %d\n",i,candidate[i]);
    }
    printf ("Number of spoil vote : %d\n",candidate[6]);
    return 0;
}
