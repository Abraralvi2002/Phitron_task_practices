#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i =1;i<=t;i++){
        int x,y,sum=0;
        scanf("%d %d",&x,&y);
        for(int j = x+1;j<y;j++){
            if(j%2 != 0){
               sum += j; 
            }else{
                printf("0\n");
            }
        }
    }
    return 0;
}