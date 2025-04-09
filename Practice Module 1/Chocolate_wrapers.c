#include<stdio.h>
int main(){
    int t,tk;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d",&tk);
        int sum = 0;
        sum = tk / 5;
        int sum2 = sum/3;
        sum += sum2;
        printf("%d\n",sum);

    }

    return 0;
}