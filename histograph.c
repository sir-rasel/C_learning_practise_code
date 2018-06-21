#include <stdio.h>
int main(){
    int i,j,n,x,num[5];
    for(i=0;i<5;i++){
        printf("Enter employs in group: ");
        scanf("%d",&num[i]);
    }
    printf("\n");
    for(n=0;n<5;n++){
        for(i=1;i<=3;i++){
            if(i==2) printf("Group-%d |",n+1);
            else printf("\t|");
            for(j=1;j<=num[n];j++) printf("*");
            if(i==2) printf("(%d)\n",num[n]);
            else printf("\n");
        }
        printf("\n");
    }
    return 0;
}
