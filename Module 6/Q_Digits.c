#include<stdio.h>
int main(){
    int t,n;
    scanf("%d\n",&t);
    for(int i=1;i<=t;i++){
        scanf("%d\n",&n);
        if(n==0){
            printf("%d ",n);
        }
       while(n!=0){ 
        printf("%d ",n%10);
         n /= 10;
       }
       printf("\n");
    }
    return 0;
}