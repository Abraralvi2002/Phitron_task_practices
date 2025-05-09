#include<stdio.h>
#include<string.h>
int main(){
    char m[1001] = {"codeforces"};
    int t;
    scanf("%d",&t);
    for(int i = 1;i<=t;i++){
        char c[1001];
        scanf("%s",c);
        int len = strlen(c);
        int count = 0;
        for(int i = 0;i<len;i++){
            if(m[i] != c[i]){
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}