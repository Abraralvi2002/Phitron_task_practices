#include<stdio.h>
int main(){
    char str1[100],str2[100];
    scanf("%s %s",&str1,&str2);
    int i = 0;
    while(1){
        if(str1[i] == '\0' && str2[i] == '\0'){
            printf("The strings are equal");
            break;
        }else if(str1[i] == '\0'){
            printf("String 1 is smaller.");
            break;
        }else if(str2[i] == '\0'){
            printf("String 2 is smaller.");
            break;
        }else if(str1[i]<str2[i]){
            printf("String 1 is smaller.");
            break;
        }else if(str1[i]>str2[i]){
            printf("String 2 is smaller.");
            break;
        }else if(str1[i] == str2[i]){
            i++;
        }
    }
    return 0;
}