#include<stdio.h>
#define SIZE 5
int queue[SIZE];
int front=-1,rear=-1;

void enqueue(int value)
{
	if ((rear + 1) % SIZE == front)
	{
		printf("the queue is full");
	}
	else  
	{
		if(front == -1 && rear == -1)
		{
			front=0;
		}
		
		rear = (rear + 1) % SIZE;
		
	
		queue[rear]=value;
	}
	
	
	




}


void dequeue()
{
	if(front == -1)
	{
		printf("the queue is empty");
	}
	else
	{
		printf("the deleted element is: %d",queue[front]);
		if(front == rear)
		{
			front = -1;
			rear = -1;
			printf("\nqueue is empty");
		}
		else
		{
		
			front = (front + 1) % SIZE;
		}
	}



}



void display()
	{
	    if(front == -1)
	    {
		printf("the queue is empty\n");
	    }
	    else
	    {
		printf("the queue is: \n");
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

	int value,q,j=0;
	while(j!=1)
	{
	
		printf("select a option from menu 1:3 : ");
		printf("\n1: enqueue\n2:dequeue\n3:display\n4:exit\n");
		printf("enter your choice: ");
		scanf("%d",&q);
		if(q > 4 || q == 0)
		{
		
		printf("invalid option");
		
		}
		else
		{ 
			if(q==1)
			{
			printf("enter the value you need to enqueue: ");
			scanf("%d",&value);
			printf("\n");
			enqueue(value);
					
			}
			
			
			
			
			
			else if(q==2)
			{
				dequeue();
				printf("\n");
			
			}
			
			
			
			
			
			else if(q==3)
			{
				display();
				printf("\n");
			}
			
			
			else
			{
				j=j+1;
			
			}
			}
			
	
	
	
	}
	
	 
	
	
	
	



}



