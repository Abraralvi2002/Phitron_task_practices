#include<stdio.h>
int main(){
    int n,x;
    scanf("%d",&n);
    int ar[n];
    for(int i =0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    scanf("%d",&x);
    int flag = 0;
    for(int i = 0;i<n-1;i++){
        for(int j = i+1;j<n;j++){
            int sum = ar[i] + ar[j];
            if(sum==x){
                printf("YES\n");
                printf("%d %d\n",ar[i],ar[j]);
                flag++;
            }
        }
    }
    if(flag==0){
        printf("NO\nThe values did not maatched to sum.");
    }

    return 0;
}