#include<stdio.h>
void Print(int n){
    for(int i = 1;i<=n;i++){
        printf("%d",i);
        if(i<=n-1){
            printf(" ");
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    Print(n);
    return 0;
}