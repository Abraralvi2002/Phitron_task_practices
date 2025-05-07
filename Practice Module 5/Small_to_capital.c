#include<stdio.h>
char small_to_capital(char a){
    return a-32;
}
int main(){
    char a;
    scanf("%c",&a);
    printf("%c",small_to_capital(a));
    return 0;
}