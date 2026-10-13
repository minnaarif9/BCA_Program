#include <stdio.h>

int main()
{
    int a, b;
    float x, y;
    double p, q;
    char c1, c2;

    printf("Enter two integer values: ");
    scanf("%d %d", &a, &b);

    printf("Enter two float values: ");
    scanf("%f %f", &x, &y);

    printf("Enter two double values: ");
    scanf("%lf %lf", &p, &q);

    printf("Enter two characters: ");
    scanf(" %c %c", &c1, &c2);

    printf("\n--- INTEGER OPERATIONS ---\n");
    printf("Addition = %d\n", a + b);
    printf("Subtraction = %d\n", a - b);
    printf("Multiplication = %d\n", a * b);
    printf("Division = %d\n", a / b);
    printf("Modulus = %d\n", a % b);

    printf("\n--- FLOAT OPERATIONS ---\n");
    printf("Addition = %.2f\n", x + y);
    printf("Subtraction = %.2f\n", x - y);
    printf("Multiplication = %.2f\n", x * y);
    printf("Division = %.2f\n", x / y);

    printf("\n--- DOUBLE OPERATIONS ---\n");
    printf("Addition = %.2lf\n", p + q);
    printf("Subtraction = %.2lf\n", p - q);
    printf("Multiplication = %.2lf\n", p * q);
    printf("Division = %.2lf\n", p / q);

    printf("\n--- CHARACTER OPERATIONS ---\n");
    printf("Character 1 = %c\n", c1);
    printf("Character 2 = %c\n", c2);
    printf("Addition = %d\n", c1 + c2);
    printf("Subtraction = %d\n", c1 - c2);
    printf("Multiplication = %d\n", c1 * c2);
    printf("Division = %d\n", c1 / c2);
    printf("Modulus = %d\n", c1 % c2);

    return 0;
}