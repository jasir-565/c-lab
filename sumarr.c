#include<stdio.h>
int main()
{
	int arr[50];
	int sum=0,n;
	printf("enter size of array between 1-50 : ");
	scanf("%d",&n);
	if(n>50)
	{
		printf("invalid input please enter a number between 1-50 \n");
	
	}
	else
	{
	
	
		for(int i=0;i<n;i++)
		{	
			printf("enter the elements: [%d]",i);
			scanf("%d",&arr[i]);
		}
		for(int j=0;j < n;j++)
		{
			sum=sum+arr[j]; 
		}
		printf("the sum of the array elements is: %d \n", sum);
	}
	return 0;
}
