#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *link;
};

struct node *header = NULL;

void insertAtFront(int item)
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = item;
    newnode->link = NULL;

    if (header == NULL)
    {
        header = newnode;
    }
    else
    {
        newnode->link = header;
        header = newnode;
    }
}

void traverse()
{
    struct node *ptr;
    ptr = header;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->link;
    }
}

void insertAtEnd(int item)
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = item;
    newnode->link = NULL;

    if (header == NULL) 
    {
        header = newnode;
    }
    else
    {
        struct node *ptr;
        ptr = header;
        while (ptr->link != NULL) 
        {
            ptr = ptr->link;
        }
        ptr->link = newnode;
    }
}

void insertAtAny(int key, int item)
{
    struct node *ptr = header;
    struct node *prev = NULL;
    struct node *newnode;
    
    while (ptr != NULL)
    {
        if (ptr->data == key)
        {
            newnode = (struct node*)malloc(sizeof(struct node));
            newnode->data = item;
            newnode->link = ptr;

            if (prev == NULL)
            {
                header = newnode;
            }
            else
            {
                prev->link = newnode;
	    }
            return;
        }
        prev = ptr;
        ptr = ptr->link;
    }
    printf("Key %d not found. Insertion not possible.\n", key);
}

void deleteAtFront()
{
	struct node *ptr;
	if(header == NULL)
	{
		printf("Empty List. Deletion not possible");
	}
	else
	{
		ptr = header;
		header = header -> link;
		free(ptr);
	}
}

void deleteAtEnd()
{
	struct node *ptr,*ptr1;
	if(header == NULL)
	{
		printf("Empty List. Deletion not possible");
	}
	else
	{
		while(ptr -> link != NULL)
		{
			ptr1 = ptr;
			ptr = ptr -> link;
		}
		ptr1 -> link = NULL;
		free(ptr);
	}
}

void deleteAtAny(int key)
{
	struct node *ptr, *ptr1;
	ptr = header;
	ptr1 = NULL;
	
	while(ptr != NULL && ptr -> data != key)
	{
		ptr1 = ptr;
		ptr = ptr -> link;
	}
	if(ptr == NULL)
	{
		printf("Key Not found, Deletion not possible");
	}
	else
	{
		printf("Deleted element is %d", ptr -> data);
		if(ptr1 != NULL)
		{
			ptr1 -> link = ptr -> link;
		}
		else
		{
			header = ptr -> link;
		}
		free(ptr);
	}
}

int main()
{
    int choice, item, key;
    while (1)
    {
        printf("\n1.Insert at Front\n2.Insert at End\n3.Insert at Any Position\n4.Delete at Front\n5.Delete at End\n6.Delete at Any Position\n7.Display\n8.Exit\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("Enter item: ");
                scanf("%d", &item);
                insertAtFront(item);
                break;
            case 2:
                printf("Enter item: ");
                scanf("%d", &item);
                insertAtEnd(item);
                break;
            case 3:
                printf("Enter key and item: ");
                scanf("%d %d", &key, &item);
                insertAtAny(key, item);
                break;
            case 4:
                deleteAtFront();
                break;
            case 5:
                deleteAtEnd();
                break;
            case 6:
                printf("Enter key: ");
                scanf("%d", &key);
                deleteAtAny(key);
                break;
            case 7:
                traverse();
                break;
            case 8:
                exit(0);
            default:
                printf("Invalid choice.\n");
        }
    }
}

