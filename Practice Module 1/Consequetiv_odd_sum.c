#include<stdio.h>
int main(){
    int x,y,t;
    scanf("%d ",&t);
    for(int i = 1;i <= t;i++){
      scanf("%d %d",&x,&y);
      if(x>y){
        int temp = x;
        x = y;
        y = temp;
      }
      int sum =0;
      for(int j=x+1;j<y;j++){
        if(j%2!=0){
            sum += j;
        }
      }
      printf("%d\n",sum);
    }
    return 0;
}
