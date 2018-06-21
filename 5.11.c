#include<stdio.h>
int main(){
    float len,hei,hyp,a,b;
    printf("Enter Length, Height and Hypotenes of Triangle\n");
    scanf("%f %f %f",&len,&hei,&hyp);
    a=hyp*hyp;
    b=len*len+hei*hei;
    if(a==b){
        printf("Triangle is Right Angled Triangle\n");
    }
    else{
        printf("Triangle is Not a Right Angled Triangle\n");
    }
    return 0;
}
