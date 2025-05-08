#include<stdio.h>
int main(){
    int ar[3];
    for(int i = 0;i<3;i++){
        scanf("%d",&ar[i]);
    }
    int ar2[3];
    for(int i = 0;i<3;i++){
        ar2[i] = ar[i];
    }
    for(int i = 0;i<3;i++){
        for(int j = i+1;j<3;j++){
            if(ar[i]>ar[j]){
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }
    for(int i = 0;i<3;i++){
        printf("%d\n",ar[i]);
    }
    printf("\n");
    for(int i = 0;i<3;i++){
        printf("%d\n",ar2[i]);
    }
    return 0;
}