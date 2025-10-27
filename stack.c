#include <stdio.h>
#define MAX_SIZE 10

int s[MAX_SIZE], top = -1;

void push(int value)
{
    if (top >= MAX_SIZE - 1)
    {
        printf("The stack is full\n");
    }
    else
    {
        top++;
        s[top] = value;
        printf("The value %d is pushed into the stack\n", value);
    }
}

void pop()
{
    if (top < 0)
    {
        printf("Cannot pop because the stack is empty\n");
    }
    else
    {
        printf("The popped element is: %d\n", s[top]);
        top--;
    }
}

void display()
{
    if (top == -1)
    {
        printf("The stack is empty\n");
    }
    else
    {
        printf("The stack elements are: ");
        for (int i = top; i >= 0; i--)
        {
            printf("%d\t", s[i]);
        }
        printf("\n");
    }
}

int main()
{
    int value, choice;
    int exit = 0;

    while (!exit)
    {
        printf("\nSelect an option from the menu (1–4):\n");
        printf("1: Push\n2: Pop\n3: Display\n4: Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the value you need to push: ");
            scanf("%d", &value);
            push(value);
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            exit = 1;
            printf("Exiting program...\n");
            break;

        default:
            printf("Invalid option. Please try again.\n");
        }
    }

    return 0;
}

