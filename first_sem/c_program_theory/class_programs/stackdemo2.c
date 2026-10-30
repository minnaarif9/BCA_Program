#include<stdio.h>

// push method definition
void push(int newdata, int size, int *top, int stack[]){
    if(*top == size - 1){
        printf("Stack is full\n");
    }else{
        (*top)++;
        stack[*top] = newdata;
        printf("%d is pushed to top of the stack\n", newdata);
    }
}

// pop method definition
void pop(int *top){
    if(*top == -1){
        printf("Stack is empty\n");
    }else{
        // pop logic can go here
        (*top)--;
        printf("Poped data\n");
    }
}

// display method definition
void display_stack(int top, int stack[]){
    printf("display\n");
    for(int i = top; i >= 0; i--){
        printf("%d\n", stack[i]);
    }
}

int main(){
    int option=0, mydata;
    int size=5;
    // declare one stack to hold 5 integer data
    int stack[size];
    int top=-1; // to represent stack top, initially -1
    
    do {
        printf("----------------------------------------\n");
        printf("1.Push Data\n");
        printf("2.Pop Data\n");
        printf("3.Display Stack\n");
        printf("4.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&option);
        
        switch (option){
            case 1:
                printf("Enter the stack Data:");
                scanf("%d",&mydata);
                push(mydata, size, &top, stack);
                break;
            case 2:
                pop(&top);
                break;
            case 3:
                display_stack(top, stack);
                break;
            case 4:
                break;
            default:
                printf("Invalid option.....\n");
        }
    } while(option != 4);

    return 0;
}









