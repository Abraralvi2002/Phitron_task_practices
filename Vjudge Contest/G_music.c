#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int min = 0;
    if(a<b){
        min = a;
    }else{
        min = b;
    }
    long long int fac = 1;
    for(int i = 1;i<=min;i++){
        fac *= i;
    }
    printf("%lld",fac);
    return 0;
}