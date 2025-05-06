#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int star = n;
    int space = 1;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=space;j++){
            printf(" ");
        }
        for(int j = 1;j<=star-1;j++){
            printf("*");
        }
        printf("\n");
        star--;
        space++;
    }
    return 0;
}