#include <stdio.h>
int main(){
    char str[51];
    int i,t;
    scanf("%d",&t);
    while(t--){
        scanf("%s",str);
        for(i=0;str[i]!='\0';i++){
            if(str[i]=='L') str[i]=str[i-1];
            else if(str[i]=='R') str[i]=str[i+1];
        }
        printf("%s\n",str);
    }
    return 0;
}
