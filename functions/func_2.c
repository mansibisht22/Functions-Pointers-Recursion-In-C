#include <stdio.h>
#include <math.h>
int power(int, int);

void main()
{
    int x, y, ans;

    printf("Enter no and power: ");
    scanf("%d %d", &x, &y);
    ans = power(x, y);
    printf("%d", ans);
}

int power(int a, int b)
{
    int result;
    result = pow(a, b);
    return result;
}