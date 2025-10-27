#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int value)
{
    if ((rear + 1) % SIZE == front)
    {
        printf("The queue is full\n");
    }
    else
    {
        if (front == -1 && rear == -1)
        {
            front = 0;
        }

        rear = (rear + 1) % SIZE;
        queue[rear] = value;
        printf("Value %d enqueued successfully\n", value);
    }
}

void dequeue()
{
    if (front == -1)
    {
        printf("The queue is empty\n");
    }
    else
    {
        printf("The deleted element is: %d\n", queue[front]);

        if (front == rear)
        {
            front = -1;
            rear = -1;
            printf("Queue is now empty\n");
        }
        else
        {
            front = (front + 1) % SIZE;
        }
    }
}

void display()
{
    if (front == -1)
    {
        printf("The queue is empty\n");
    }
    else
    {
        printf("The queue is: ");
        int i = front;
        while (1)
        {
            printf("%d\t", queue[i]);
            if (i == rear)
                break;
            i = (i + 1) % SIZE;
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
        printf("1: Enqueue\n2: Dequeue\n3: Display\n4: Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the value you need to enqueue: ");
            scanf("%d", &value);
            enqueue(value);
            break;

        case 2:
            dequeue();
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

