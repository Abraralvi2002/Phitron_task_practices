#include<stdio.h>
#include<math.h>
int main(){
    int A,B;
    scanf("%d %d",&A,&B);
    double div = (double)A/B;
    int a = floor(div);
    int b = ceil(div);
    int c = round(div);
    printf("floor %d / %d = %d\n",A,B,a);
    printf("ceil %d / %d = %d\n",A,B,b);
    printf("round %d / %d = %d",A,B,c);

    return 0;
}