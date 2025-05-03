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
    if(s2==s){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}
