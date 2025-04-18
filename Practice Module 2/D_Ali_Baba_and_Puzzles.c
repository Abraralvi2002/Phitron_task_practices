#include<stdio.h>
int main(){
    int a,b,c;
    long long int d;
    scanf("%d %d %d %lld",&a,&b,&c,&d);
    if(a + b * c == d){
        printf("Yes");
    }else if(a + b - c == d){
        printf("Yes");
    }else if(a - b * c == d){
        printf("Yes");
    }else if(a - b + c == d){
        printf("Yes");
    }else if(a * b + c == d){
        printf("Yes");
    }else if(a * b - c == d){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}