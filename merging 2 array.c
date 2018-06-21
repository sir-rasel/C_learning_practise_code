 #include <stdio.h>
int main(){
    int a[10],b[10],c[20],i,j,k,n,m,sum;
    printf("Please input the size of A : ");
    scanf("%d",&n);
    printf("Please input the element of A : ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Please input the size of B : ");
    scanf("%d",&m);
    sum=n+m;
    printf("Please input the element of B : ");
    for(i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    for(i=0,j=0,k=0;k<sum;k++){
        if(i<n && j<m){
            if(a[i]>b[j]){
                c[k]=b[j];
                j++;
            }
            else {
                c[k]=a[i];
                i++;
            }
        }
        else{
            if(i>n-1){
                c[k]=b[j];
                j++;
            }
            else{
                c[k]=a[i];
                i++;
            }
        }
    }
    printf("Array C is : ");
    for(i=0;i<sum;i++){
        printf("%d ",c[i]);
    }
    return 0;
}
