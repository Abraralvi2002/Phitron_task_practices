#include<stdio.h>
int main(){
    long long int n;
    scanf("%lld",&n);
    long long int num;
    scanf("%lld",&num);
    long long int sum = 0;
    for(int i = 0;i<n;i++){
        int temp = num%10;
        sum += temp;
        num /= 10;
    }
    if(sum%3==0){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}