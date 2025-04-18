#include<stdio.h>
int main(){
    int t,n,max = 0;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d",&n);
        if(max < n){
            max = n;
        }
    }
    printf("%d",max);
    return 0;
}