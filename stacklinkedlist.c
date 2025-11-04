#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 5
int counter=0;
struct node 
{
    int data;
    struct node *link;
};

struct node *top = NULL;

void push(int item)
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = item;
    newnode->link = NULL;

    if (top == NULL)
    {
        top = newnode;
    }
    else
    {
    	if(counter < MAX_SIZE)
    	{
		newnode->link = top;
		top = newnode;
	}
	else
	{
		printf("Stack is full");
	}
	counter = counter+1;
    }
} 

void pop()
{
	struct node *ptr;
	if(top == NULL)
	{
		printf("Empty List. Deletion not possible");
	}
	else
	{
		ptr = top;
		top = top -> link;
		free(ptr);
	}
}
void display()
{
    struct node *ptr;
    ptr = top;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->link;
    }
}
int main()
{
    int item, choice;
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
            scanf("%d", &item);
            push(item);
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
