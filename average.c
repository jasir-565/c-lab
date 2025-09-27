#include<stdio.h>
int main()
{
	int i=0,sum=0,n;
	printf("enter the limit:");
	scanf("%d",&n);
	do
	{
		i++;
		sum+=i;
	}
	while(i < n);
	float avg=sum/n;
	printf("average of 1st %d numbers are %f \n",n,avg);
return 0;
}	
		
