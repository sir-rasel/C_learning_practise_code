#include <stdio.h>
int main(){
    int t,r1,c1,r2,c2,tem1,tem2,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
        tem1=r2-r1;
        tem2=c2-c1;
        if(tem1>tem2){
            if(tem1<0) printf("Case %d: %d\n",i,(-1)*tem1);
            else printf("Case %d: %d\n",i,tem1);
        }
        else{
            if(tem2<0) printf("Case %d: %d\n",i,(-1)*tem2);
            else printf("Case %d: %d\n",i,tem2);
        }
    }
    return 0;
}
