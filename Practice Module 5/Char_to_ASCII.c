#include<stdio.h>
int char_to_ASCII(char a){
    return a;
}
int main(){
    char a,b,c;
    scanf("%c %c %c",&a,&b,&c);
    printf("%d\n",char_to_ASCII(a));
    printf("%d\n",char_to_ASCII(b));
    printf("%d\n",char_to_ASCII(c));

    return 0;
}