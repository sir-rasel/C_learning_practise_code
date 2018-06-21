#include<stdio.h>
int main(){
    int unit;
    char name[10];
    float charge;
    printf("Enter name of User:--\n");
    scanf("%s",&name);
    printf("Enter Total unit Consumed\n");
    scanf("%d",&unit);
    if(unit>=0&&unit<=200){
            charge=100+(unit*0.80);
    }
    else if(unit>200&&unit<=300){
        charge=100+(unit*0.90);
    }
    else if(unit>300&&unit<=400){
        charge=100+unit;
    }
    else{
        charge=(100+unit)+(100+unit)*0.15;
    }
    printf("Name = %s Unit = %d Charge = %.2f\n",name,unit,charge);
    return 0;
}
