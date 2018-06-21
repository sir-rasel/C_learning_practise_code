#include <stdio.h>
int main (){
    int i,a[10],k,l,m,n,p,q,r;
    k=l=m=n=0;
    printf("Please input marks ranging from 0 to 100\n");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++){
        if(a[i]>80){
            k+=1;
        }
        if(a[i]>60&&a[i]<80){
            l+=1;
        }
        if(a[i]>40&&a[i]<60){
            m+=1;
        }
        if(a[i]<40){
            n+=1;
        }
    }
    printf("%d students odtained more than 80 marks.\n",k);
    printf("%d students odtained more than 60 marks.\n",l+k);
    printf("%d students odtained more than 40 marks.\n",k+l+m);
    printf("%d students odtained 40 or less marks.\n",n);
    printf("%d students in the range 81 to 100 marks.\n",k);
    printf("%d students in the range 61 to 80 marks.\n",l);
    printf("%d students in the range 41 to 60 marks.\n",m);
    printf("%d students in the range 0 to 40 marks.\n",n);

    return 0;
}
