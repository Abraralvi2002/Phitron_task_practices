#include<stdio.h>
int n;
void Rev_Array(int ar[]){
    for(int i = 0,j=n-1;i<n;i++,j--){
        if(i<j){
            int temp = ar[i];
            ar[i] = ar[j];
            ar[j] = temp;
        }  
    }
    for(int i = 0;i<n;i++){
        printf("%d ",ar[i]);
    }
}
int main(){
    scanf("%d",&n);
    int ar[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    Rev_Array(ar);
    return 0;
}