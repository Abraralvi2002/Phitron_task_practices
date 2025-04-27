#include<stdio.h>
#include<string.h>
int main(){
    char a[11],b[11],c[22];
    scanf("%s",&a);
    scanf("%s",&b);
    int len1 = strlen(a);
    int len2 = strlen(b);
    strcpy(c,a);
    strcat(c,b);
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    printf("%d %d\n%s\n%s %s",len1,len2,c,a,b);
    return 0;
}