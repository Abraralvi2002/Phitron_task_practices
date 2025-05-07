#include<stdio.h>
int n;
int Input_Array(int ar[]){
    for(int i = 0;i<n;i++){
        scanf("%d",&ar[i]);
    }
}
int main(){
    scanf("%d",&n);
    int ar[n];
    Input_Array(ar);
    for(int i = 0;i<n;i++){
        printf("%d ",ar[i]);
    }

    return 0;
}