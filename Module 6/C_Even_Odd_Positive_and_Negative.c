#include<stdio.h>
int main(){
    int t,n,ec=0,oc=0,pc=0,nc=0;
    scanf("%d",&t);
    for(int i =1;i<=t;i++){
        scanf("%d",&n);
        if(n%2==0){
            ec++;
        }else{
            oc++;
        }
        if(n>0){
            pc++;
        }else if(n<0){
            nc++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d",ec,oc,pc,nc);
    return 0;
}