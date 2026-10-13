#include <stdio.h>

void input(int roll[], char name[][30], int marks[][5])
{
    int i, j;

    for (i = 0; i < 5; i++)
    {
        printf("\nEnter roll number: ");
        scanf("%d", &roll[i]);

        printf("Enter name: ");
        scanf("%29s", name[i]);

        for (j = 0; j < 5; j++)
        {
            printf("Enter mark for subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
}

int total(int marks[])
{
    int i, sum = 0;

    for (i = 0; i < 5; i++)
    {
        sum = sum + marks[i];
    }

    return sum;
}

float average(int sum)
{
    return sum / 5.0;
}

float percentage(int sum)
{
    return (sum / 500.0) * 100;
}

int result(int marks[])
{
    int i;

    for (i = 0; i < 5; i++)
    {
        if (marks[i] < 35)
        {
            return 0;
        }
    }

    return 1;
}

void display(int roll[], char name[][30], int marks[][5])
{
    int i, j, sum, pass;
    float avg, per;

    printf("\nROLL\tNAME\tS1\tS2\tS3\tS4\tS5\tTOTAL\tAVERAGE\tPERCENTAGE\tRESULT\n");

    for (i = 0; i < 5; i++)
    {
        sum = total(marks[i]);
        avg = average(sum);
        per = percentage(sum);
        pass = result(marks[i]);

        printf("%d\t%s\t", roll[i], name[i]);

        for (j = 0; j < 5; j++)
        {
            printf("%d\t", marks[i][j]);
        }

        printf("%d\t%.2f\t%.2f\t\t", sum, avg, per);

        if (pass == 1)
            printf("PASS\n");
        else
            printf("FAIL\n");
    }
}

int main()
{
    int roll[5];
    char name[5][30];
    int marks[5][5];

    input(roll, name, marks);
    display(roll, name, marks);

    return 0;
}