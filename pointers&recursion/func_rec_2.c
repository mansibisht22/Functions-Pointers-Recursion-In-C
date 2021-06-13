// Using functions to calculate average annd % of 3 numbers

#include <stdio.h>

int result(int, int, int);
int main()
{
    int a, b, c;
    int res;

    printf("enter marks of 3 subs: ");
    scanf("%d %d %d", &a, &b, &c);

    res = result(a, b, c);
}

int result(int x, int y, int z)
{
    int avrg, perc,

    avrg = (x + y + z) / 3;
    perc = (x + y + z) * 100 / 300;

    printf("sum is: %d", avrg);
    printf("avg is: %d", perc);
}