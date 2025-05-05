#include<stdio.h>
int star2,space2;
int main(){
    int n;
    scanf("%d",&n);
    int star = 1;
    int space = n;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=space-1;j++){
            printf(" ");
            space2 = space;
        }
        for(int j=1;j<=star;j++){
            printf("*");
            star2 = star;
        }
        printf("\n");
        star += 2;
        space--;
    }
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=space2-2;j++){
            printf(" ");
        }
        for(int j = 1;j<=star2;j++){
            printf("*");
        }
        printf("\n");
        star2 -= 2;
        space2++;
    }
    return 0;
}