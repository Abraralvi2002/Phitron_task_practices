#include<stdio.h>
int main(){
    int x[4] = {1,2,3,4};
    int *p;
    p = x + 3;
    *p = 5;
    printf("%d",x[3]);
    return 0;
}