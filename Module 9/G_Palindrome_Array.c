#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr1[n];
    int arr2[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    for(int i = 0;i<n;i++){
        arr2[i] = arr1[i];
    }
    for(int i =0,j=n-1;i<n;i++,j--){
        if(i<j){
            int temp = arr1[i];
            arr1[i] = arr1[j];
            arr1[j] = temp;
        }
    } 
    for(int i = 0;i<n;i++){
        if(arr2[i] != arr1[i]){
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}