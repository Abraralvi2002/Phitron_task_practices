#include<stdio.h>
int main(){
    int n;
    int hash = 1;
    scanf("%d",&n);
    int space = n;
    int toggle = 1;

    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=space-1;j++){
            printf(" ");
        }
        for(int j = 1;j<=hash;j++){
            if(toggle==1){
                printf("#");
            }else{
                printf("-");
            }
        }
        printf("\n");
        hash += 2;
        space--;
        if(toggle == 1){
            toggle = 0;
        }else if(toggle == 0){
            toggle = 1;
        }
    }
    int revhash = hash-4;
    int revspace = 1;
    for(int i = 1;i<=n-1;i++){
        for(int j = 1;j<=revspace;j++){
            printf(" ");
        }
        for(int j = 1;j<=revhash;j++){
            if(toggle == 1){
                printf("#");
            }else{
                printf("-");
            }
        }
        printf("\n");
        revhash -= 2;
        revspace++;
        if(toggle == 1){
            toggle = 0;
        }else if(toggle == 0){
            toggle = 1;
        }
    }
    return 0;
}