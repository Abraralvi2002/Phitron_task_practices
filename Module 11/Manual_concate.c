#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[100];
    scanf("%s %s",&str1,&str2);
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    for(int i = 0;i<len1+len2;i++){
        str1[len1+i] = str2[i];
    }
    printf("%s",str1);
    return 0;
}