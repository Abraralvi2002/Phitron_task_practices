#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        if(i==1){
            printf("I hate it");
        }else{
            printf("I");
        }
    }
    return 0;
}