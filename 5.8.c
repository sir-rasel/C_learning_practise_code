#include<stdio.h>
int main(){
    float pay,dis,prize;
    int item;
    printf("Input the purchase amount.\n");
    scanf("%f",&prize);
    printf("\nSelect item as follows >>\n(1) for Mill cloth or (2) for Handloom items.\n");
    scanf("%d",&item);
    if(prize>0&&prize<101){
        switch(item){
            case 1:
            prize+=0;
            break;
            case 2:
            dis=prize*0.05;
            prize-=dis;
        }
    }
    if(prize>100&&prize<201){
        switch(item){
            case 1:
            dis=prize*0.05;
            prize-=dis;
            break;
            case 2:
            dis=prize*0.075;
            prize-=dis;
        }
    }
    if(prize>200&&prize<301){
        switch(item){
            case 1:
            dis=prize*0.075;
            prize-=dis;
            break;
            case 2:
            dis=prize*0.1;
            prize-=dis;
        }
    }
    if(prize>300){
        switch(item){
            case 1:
            dis=prize*0.1;
            prize-=dis;
            break;
            case 2:
            dis=prize*0.15;
            prize-=dis;
        }
    }

    printf("\nAmount to be paid %.2f.\n",prize);
    return 0;
}
