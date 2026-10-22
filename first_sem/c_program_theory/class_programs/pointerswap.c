#include <stdio.h>

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int main()
{
    int m = 10, n = 20;

    printf("Before swapping: m = %d, n = %d\n", m, n);

    swap(&m, &n);

    printf("After swapping: m = %d, n = %d\n", m, n);

    return 0;
}