#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i = 1;i<=t;i++){
        int count = 0;
        char str[101];
        scanf("%s",&str);
        int length = strlen(str);
        if(length<10){
        printf("%s\n",str);
        }else{
            for(int i = 0;i<length-1;i++){
            count++;
            }
            printf("%c%d%c\n",str[0],count-1,str[length-1]);
        }
    }    
    return 0;
}