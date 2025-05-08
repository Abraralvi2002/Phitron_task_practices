#include<stdio.h>
void Change_Magic(int ar[],int n){
    ar[n-1] = 100;
}
int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    Change_Magic(ar,n);
    for(int i = 0;i<n;i++){
        printf("%d ",ar[i]);
    }
    return 0;
}