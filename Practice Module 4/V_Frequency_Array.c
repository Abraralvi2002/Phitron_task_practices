#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int ar[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    for(int i = 1;i<=m;i++){
        int count = 0;
        for(int j = 0;j<n;j++){
            if(ar[j] == i){
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}