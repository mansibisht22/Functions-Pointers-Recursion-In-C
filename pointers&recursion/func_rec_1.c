// Using functions to calculate sum & avg of 5 numbers

#include <stdio.h>

int maths(int, int, int, int, int);
int main()
{
    int a, b, c, d, e;
    float sum, avg, result;

    printf("enter 5 numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    result = maths(a, b, c, d, e);
}

int maths(int l, int m, int n, int o, int p)
{
    float s, a, sd;

    s = l + m + n + o + p;
    a = (l + m + n + o + p) / 5;

    printf("sum is: %f", s);
    printf("avg is: %f", a);
}