#include<stdio.h>
#include<math.h>
int main(){
    double n,x,y;
    scanf("%lf %lf %lf",&n,&x,&y);
    double tmp = (n * y) / 100;
    double result = ceil(tmp);
    double clone = result - x;
    printf("%.0lf",clone);
    return 0;
}