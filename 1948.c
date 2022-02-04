#include <stdio.h>

int residue(int n, int i)
{
    while (n >= i)
    {
        n -= i;
    }
    return n == 0 ? 0 : 1;
}

int simple_num(int n)
{
    for (int i = n - 1; i > 1; i--)
    {
        if (residue(n, i) == 0)
        {
            return 0;
        }
    }
    return 1;
}

int largest_divisor(int n)
{
    for (int i = n; i > 1; i--)
    {
        if (simple_num(i) && residue(n, i) == 0)
        {
            return i;
        }
    }
    return 0;
}

int main()
{
    int num;
    scanf("%d", &num);
    if (num < 0)
    {
        num *= -1;
    }
    if (num < 2)
    {
        printf("n/a");
    }
    else
    {
        printf("%d", largest_divisor(num));
    }
    return 0;
}