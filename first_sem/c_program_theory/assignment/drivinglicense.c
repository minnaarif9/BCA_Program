#include <stdio.h>

int main()
{
    char nationality, test, fee;
    int age;

    printf("Indian nationality (Y/N): ");
    scanf(" %c", &nationality);

    if(nationality != 'Y' && nationality != 'y')
        printf("Not eligible: Indian nationality required.");
    else
    {
        printf("Enter age: ");
        scanf("%d", &age);

        if(age < 18)
            printf("Not eligible: Age must be 18 or above.");
        else
        {
            printf("Passed driving test (Y/N): ");
            scanf(" %c", &test);

            if(test != 'Y' && test != 'y')
                printf("Not eligible: Driving test not passed.");
            else
            {
                printf("Fee paid (Y/N): ");
                scanf(" %c", &fee);

                if(fee != 'Y' && fee != 'y')
                    printf("Not eligible: Fee not paid.");
                else
                    printf("Eligible for driving licence.");
            }
        }
    }

    return 0;
}