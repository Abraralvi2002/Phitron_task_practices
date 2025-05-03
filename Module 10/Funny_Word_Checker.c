#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s[101],s2[101];
    scanf("%s",&s);
    strcpy(s2,s);
    int len = strlen(s);
    for(int i = 0,j=len-1;i<len;i++,j--){
        if(i<j){
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
        }
    }
    int count =0;
    for(int i =0;i<len;i++){
        if(s[i]==s2[i]){
            count++;
        }
    }
    if(count==len){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}
