#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s1[101],s2[101];
    scanf("%s %s",s1,s2);
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int count = 0;
    for(int i = 0;i<len1;i++){
        for(int j = 0;j<len2;j++){
            if(s1[i] == s2[j]){
                count++;
            }
        }
    }
    if(count==len2){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}
