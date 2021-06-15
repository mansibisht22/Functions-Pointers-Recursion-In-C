#include <stdio.h>
int addnos(int);

int main()
{
    int x;

    printf("enter n: ");
    scanf("%d", &x);

    printf("sum of n natural nos is: %d", addnos(x));
}

int addnos(int x)
{
    int a, res = 0;
    if (x != 0)
    {
        return x + addnos(x - 1);
    }

    else
        return x;
}