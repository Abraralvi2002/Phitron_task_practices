#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int space = n;
    for(int i = 1;i<=n;i++){
        int k = i;
        for(int j = 1;j<=space-1;j++){
            printf(" ");
        }
        for(int j = 1;j<=i;j++,k--){
            printf("%d",k);
        }
        printf("\n");
        space--;
    }
    return 0;
}