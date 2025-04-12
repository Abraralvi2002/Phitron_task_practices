#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if(a>=65 && a<=90){
        int temp = a + 32;
        printf("%c",temp);
    }else if(a>=97 && a<=122){
        int temp1 = a - 32;
        printf("%c",temp1);
    }

    return 0;
}