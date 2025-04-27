#include<stdio.h>
#include<string.h>
int main(){
    char str[1001];
    char str2[1001];
    scanf("%s",&str);
    strcpy(str2,str);
    int len = strlen(str);
    for(int i =0,j=len-1;i<j;i++,j--){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    for(int i=0;i<len;i++){
        if(str[i] != str2[i]){
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    
    return 0;
}