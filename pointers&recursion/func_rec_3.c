#include <stdio.h>
int rec_func(int);
int non_rec_func(int);

int main()
{

    int num, rec, non_rec;

    printf("enter number to obtain sum: ");
    scanf("%d", &num);

    rec = rec_func(num);
    non_rec = non_rec_func(num);

    printf("The sum through recursive func is: %d", rec);
    printf("The sum through non recursive func is: %d", non_rec);
}

int rec_func(int x)
{

    if (x == 0)
    {
        return 0;
    }

    else
    {
        return (x % 10 + rec_func(x / 10));
    }
}

int non_rec_func(int x)
{

    int n, sum = 0;

    while (x != 0)
    {
        n = x % 10;
        sum = sum + n;
        x = x / 10;
    }

    return sum;
}