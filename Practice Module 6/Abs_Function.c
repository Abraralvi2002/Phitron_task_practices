#include<stdio.h>
int Abs_val(int a){
    return abs(a);
}
int main(){
    int a;
    scanf("%d",&a);
    printf("%d",Abs_val(a));
    
    return 0;
}