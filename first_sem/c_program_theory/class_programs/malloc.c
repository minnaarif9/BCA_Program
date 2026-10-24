#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;

    p = (int *)malloc(5 * sizeof(int));

    if (p == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    p[1] = 10;
    p[2] = 20;

    printf("%d\n", p[1]);
    printf("%d\n", p[2]);

    free(p);

    return 0;
}