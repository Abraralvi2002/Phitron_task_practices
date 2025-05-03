#include<stdio.h>
int main(){
    char s[78];
    scanf("%s",&s);
    for(int i = 0;i<77;i++){
        char a = s[i];
        int count = 0;
        for(int j = 0;j<77;j++){
            if(s[j]==a){
                count++;
            }
        }
        if(count != 3){
            printf("%c",a);
            break;
        }
    }
    return 0;
}