#include<stdio.h>
int main(){
    int n,sum=0,digits;
    scanf("%d",&n);
    int arr[n];
    scanf("%d",&digits);
    for(int i = 0;i<n;i++){
        arr[i] = digits%10;
        digits /= 10;
    }
    for(int i = 0;i<n;i++){
        sum += arr[i];
    }
    printf("%d",sum);
    return 0;
}