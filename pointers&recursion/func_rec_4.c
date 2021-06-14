#include <stdio.h>
int rec_prime(int);
int non_rec_prime(int);

int main()
{
    int num, rec, non_rec;

    printf("enter no. to obtain prime factors: ");
    scanf("%d", &num);

    non_rec_prime(num);
    rec_prime(num);
}

int rec_prime(int num)
{
    int x;

    for (x = 2; x <= num; x++)
    {
        if (num % x == 0)
        {
            printf("%d ", x);

            rec_prime(num / x);
            break;
        }
    }
}

int non_rec_prime(int num)
{
    int x;

    for (x = 2; x <= num; x++)
    {

        if (num % x == 0)
        {
            printf("%d ", x);
            num = num / x;
            x--;
        }
    }
}
