#include<stdio.h>
int main (){
    int math,phy,chem,total,tmp;
    scanf("%d%d%d",&math,&phy,&chem);
    total=math+phy+chem;
    tmp=math+phy;
    if((math>=60&&phy>=50&&chem>=40&&total>=200)||(tmp>=150)){
        printf("The candidate is eligible.");
    }else{
        printf("The candidate is not eligible.");
    }
    return 0;
}
