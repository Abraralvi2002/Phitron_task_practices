#include<stdio.h>
int String_Length(char s[]){
    int count = 0;
    for(int i = 0;i<100;i++){
        if(s[i] != '\0'){
            count++;
        }
        if(s[i]=='\0'){
            break;
        }
    }
    return count;
}
int main(){
    char s[100];
    scanf("%s",s);
    printf("%d",String_Length(s));
    return 0;
}