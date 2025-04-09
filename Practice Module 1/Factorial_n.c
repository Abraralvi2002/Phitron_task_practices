#include<stdio.h>
int main(){
    int n,t;
    scanf("%d ",&t);
    for(int i = 1;i <= t;i++){
      scanf("%d",&n);
      int fac = 1;
        for(int j=1;j<=n;j++){
            fac *= j;
        }
        printf("%d\n",fac);
    }
    return 0;
}
