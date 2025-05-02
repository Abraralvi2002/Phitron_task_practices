#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s[100001];
    scanf("%s",&s);
    int i = 0,count=0;
    while(i != '\0'){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            i++;
        }else{
            count++;
        }
        printf("%d",count);
    }
    return 0;
}
