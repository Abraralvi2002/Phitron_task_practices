#include<stdio.h>
int main(){
    int n;
    int letter = 65;
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        for(int j = 65;j<=letter;j++){
            printf("%c ",j);
        }
        printf("\n");
        letter++;
    }
    return 0;
}