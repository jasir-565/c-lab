//write a c program to implement stack data structure using array with t he followiung questions
//!)push

//3)display


#include<stdio.h>
#define Max_SIZE 10
int s[Max_SIZE],top=-1;
void push(int value)
{
	if(top>=Max_SIZE-1)
	{
		printf("the stack is full");
	}
	else
	{
		top++;
		s[top]=value;
		printf("the value %d  is pushed into the stack",value);
	
		
	}
	printf("\n");


}


void pop(int value)
{
	int p;
	if(top < 0)
	{
		printf("cant pop cause stack is empty");
	}
	else
	{
		top--;
			
	}

}


void display()
{
	if(top==-1)
	{
		printf("the stack is empty");
	}
	else
	{
		printf("the stack elements are: ");
		for(int i=top;i>=0;i--)
		{
			printf("%d",s[i]);
			
		
		}
	
	}



}





int main()
{

	int value,a,q,j=0;
	while(j!=1)
	{
	
		printf("select a option from menu 1:3 : ");
		printf("\n1: push\n2:pop\n3:display\n4:exit\n");
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
			printf("enter the value you need to push: ");
			scanf("%d",&value);
			printf("\n");
			push(value);
					
			}
			
			
			
			
			
			else if(q==2)
			{
				pop(value);
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
