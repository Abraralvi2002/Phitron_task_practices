#include<stdio.h>
#include<string.h>
int main(){
    char s1[101],s2[101],s3[101],s4[101];
    scanf("%s %s",s1,s2);
    scanf("%s %s",s3,s4);
    int val = strcmp(s2,s4);
    if(val==0){
        printf("ARE Brothers");
    }else{
        printf("NOT");
    }
    return 0;
}