#include <stdio.h>
#define NMAX 10

int input(int *a, int *n);
void output(int *a, int n);
void squaring(int *a, int n);

int main()
{
    int n, data[NMAX];
    input(&data[0], &n);
    squaring(&data[0], n);
    // output(data, n);

    return 0;
}

int input(int *a, int *n)
{
    scanf("%d", n);
    for(int *p = a; p < n; p++)
    {
        scanf("%d", a+*p);
        // printf("%d", *(a+*p));
    }
    return 0;
}

// void output(int *a, int n)
// {
//     //NOTHING
// }

// void squaring(int *a, int n)
// {
//     printf("%d", *a);
// }


