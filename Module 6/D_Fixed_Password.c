#include<stdio.h>
int main(){
    int n;
    for(int i = 1;;i++){
        scanf("%d",&n);
        if(n==1999){
            printf("Correct");
            break;
        }else{
            printf("Wrong\n");
        }
    }
    return 0;
}