#include <stdio.h>
#include <string.h>

int main(){
    char line[1000000];
    int t,i,j,word;
    long long int price;
    scanf("%d",&t);
    while(t--){
        scanf(" %[^\n]",line);
        word=0;
        for(i=0;line[i]!='\0';i++){
            if(!(line[i]>='a' && line[i]<='z')){
                if(line[i]=='.' || line[i]==' ') {
                    word++;
                    for(j=i+1;line[j]==' ';j++) i++;

                }

            }
        }
         //printf("%c\n",line[strlen(line)-1]);
        if (line[strlen(line)-1]!= '.' && line[strlen(line)-1]!= ' ') word++;
        price = word*420;
        printf("%lld\n",price);
    }
    return 0;
}
