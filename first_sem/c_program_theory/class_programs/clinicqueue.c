#include <stdio.h>
#include <string.h>

#define MAX 5

struct Patient
{
    int token;
    char name[30];
};

// Global queue variables
struct Patient queue[MAX];

int front = -1;
int rear = -1;

int nextToken = 101;

// Function prototypes
int isFull();
int isEmpty();
void enqueue(char name[]);
void dequeue();
void peek();
void display();
int count();

// Check whether queue is full
int isFull()
{
    if (rear == MAX - 1)
    {
        return 1;
    }
    return 0;
}

// Check whether queue is empty
int isEmpty()
{
    if (front == -1)
    {
        return 1;
    }
    return 0;
}

// Register a new patient
void enqueue(char name[])
{
    if (isFull())
    {
        printf("Waiting Room Full! Please Come Later.\n");
        return;
    }

    if (front == -1)
    {
        front = 0;
    }

    rear++;

    queue[rear].token = nextToken;

    strcpy(queue[rear].name, name);

    printf("Token %d Issued To %s\n",
           nextToken, name);

    nextToken++;
}

// Call the next patient
void dequeue()
{
    if (isEmpty())
    {
        printf("No Patients Waiting.\n");
        return;
    }

    printf("Calling Token %d - %s, Please go to the doctor.\n",
           queue[front].token,
           queue[front].name);

    front++;

    if (front > rear)
    {
        front = -1;
        rear = -1;
    }
}

// Show the next patient without removing
void peek()
{
    if (isEmpty())
    {
        printf("No Patients Waiting.\n");
        return;
    }

    printf("Next Patient: Token %d - %s\n",
           queue[front].token,
           queue[front].name);
}

// Display all waiting patients
void display()
{
    int i;

    if (isEmpty())
    {
        printf("No Patients Waiting.\n");
        return;
    }

    printf("Waiting:\n");

    for (i = front; i <= rear; i++)
    {
        printf("[%d - %s] ",
               queue[i].token,
               queue[i].name);
    }

    printf("\n");
}

// Count waiting patients
int count()
{
    if (isEmpty())
    {
        return 0;
    }

    return rear - front + 1;
}

// Main function
int main()
{
    int choice;
    char name[30];

    while (1)
    {
        printf("\n===== Clinic Token System =====\n");
        printf("1. Register patient\n");
        printf("2. Call next patient\n");
        printf("3. View next patient\n");
        printf("4. Display waiting patients\n");
        printf("5. Count waiting patients\n");
        printf("6. Exit\n");

        printf("Enter choice: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input.\n");

            while (getchar() != '\n');

            continue;
        }

        switch (choice)
        {
            case 1:
                printf("Enter patient name: ");
                scanf(" %29[^\n]", name);
                enqueue(name);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                printf("Patients waiting: %d\n", count());
                break;

            case 6:
                printf("Clinic closed. Goodbye!\n");
                return 0;

            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}