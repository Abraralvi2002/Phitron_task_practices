#include<stdio.h>
#include<string.h>
int main(){
    char str[100001];
    scanf("%s",&str);
    int length = strlen(str);
    for(int i = 0;i<length;i++){
        if(str[i] == ','){
            str[i] = ' ';
        }else if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] += 32;
        }else if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] -= 32;
        }
    }
    printf("%s",str);
    return 0;
}