#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i = 1;i<=t;i++){
        int n;
        scanf("%d",&n);
        char s[n];
        scanf("%s",s);
        int len = strlen(s);
        if(s[0] == s[len-1]){
            printf("No\n");
        }else{
            printf("Yes\n");
        }
    }
    return 0;
}