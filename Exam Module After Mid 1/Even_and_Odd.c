#include<stdio.h>
void odd_even(){
    int n;
    scanf("%d",&n);
    int ar[n];
    int oc = 0,ec = 0;
    for(int i = 0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    for(int i = 0;i<n;i++){
        if(ar[i]%2==0){
            ec++;
        }else{
            oc++;
        }
    }
    printf("%d %d",ec,oc);
}
int main(){
    odd_even();
    return 0;
}