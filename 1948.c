#include <stdio.h>

int residue(int x, int i)
{
    while (x >= i)
    {
        x -= i;
    }
    return x == 0 ? 0 : 1;
}

int div(int x)
{
    int x1 = x;
    for (int i = 9; i > 2; i--)
    {
        if (residue(x, i) == 0)
        {
            ;
            return i;
        };
    };
    return 0;
}

int main()
{
    int x;
    scanf("%d", &x);
    if (x < 0)
        x *= -1;
    if (x < 2)
    {
        printf("n/a");
    }
    else
    {
        printf("%d", div(x));
    }
    return 0;
}