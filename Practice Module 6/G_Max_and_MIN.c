#include<stdio.h>
int n;
int Max(int ar[]){
    int max = ar[0];
    for(int i = 0;i<n;i++){
        if(ar[i]>max){
            max = ar[i];
        }
    }
    return max;
}
int Min(int ar[]){
    int min = ar[0];
    for(int i = 0;i<n;i++){
        if(ar[i]<min){
            min = ar[i];
        }
    }
    return min;
}
int main(){
    scanf("%d",&n);
    int ar[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    printf("%d %d",Min(ar),Max(ar));
    return 0;
}