#include<stdio.h>
#include<string.h>
int is_palindrome(char s[]){
    char s2[1001];
    int len = strlen(s);
    strcpy(s2,s);
    for(int i = 0,j = len - 1;i<j;i++,j--){
        char tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
    }
    int val = strcmp(s2,s);
    return val;
}
int main(){
    char str[1001];
    scanf("%s",str);
    int val = is_palindrome(str);
    if(val==0){
        printf("Palindrome");
    }else{
        printf("Not Palindrome");
    }
    return 0;
}