#include<stdio.h>
int main() {
    int n, x, y;
    scanf("%d %d %d", &n, &x, &y);
    int tmp = (n * y + 100 - 1) / 100;
    int clones = tmp - x;
    if (clones < 0) clones = 0;
    printf("%d\n", clones);
    return 0;
}
