//even odd with continue....
#include<stdio.h>
int main(){
    for(int i=1;i<=10;i++){
        if(i%2==0){
            continue;
        }else{
            printf("%d\n",i);
        }
    }
    return 0;
}