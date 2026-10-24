#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, n, i, sum = 0;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    // malloc(n * sizeof(int)) — allocates memory for n integers.
    p = (int *)malloc(n * sizeof(int));

    if (p == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    printf("Enter array elements:\n");

    for (i = 0; i < n; i++)
    {
        // p[i] — accesses each array element.
        scanf("%d", &p[i]);
    }

    for (i = 0; i < n; i++)
    {
        // sum = sum + p[i] — calculates the sum of all elements.
        sum = sum + p[i];
    }

    printf("Sum of array elements = %d\n", sum);

    // free(p) — releases the allocated memory.
    free(p);

    return 0;
}