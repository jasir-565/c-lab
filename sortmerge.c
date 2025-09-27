//write a c program to merge and sort array
//logic
//accept values for array1 and array2
//sort array 1 and 2
//merge array 1 n 2 new array must be sum of size of 2 arrays

#include<stdio.h>
void display(int ary[],int sze)
{
        printf("array elements are: ");
	for(int i=0;i<sze;i++)
	printf("%d ",ary[i]);
}

void sort(int ary[],int sze)
{
	for(int i=0;i<sze;i++)
	{
		for(int j=i+1;j<sze;j++)
		{
			if(ary[i] > ary[j])
			{
				int temp=ary[i];
				ary[i]=ary[j];
				ary[j]=temp;
			
			}
		
		 }
	}


}
void merge_array(int ary1[],int sze1,int ary2[],int sze2,int ary3[])
{
	int i; 

	
	for(i = 0; i < sze1; i++)
	{
		ary3[i] = ary1[i];
	}

	
	for(int j = 0; j < sze2; j++)
	{
		ary3[i] = ary2[j];
		i++;
	}
}


int main()
{
	int ary1[100];
	int ary2[100];
	int ary3[200];
	int sze1,sze2;
	
	
	printf("enter the size of first array: ");
	scanf("%d",&sze1);
	if(sze1<100)
	{
		for(int i=0;i<sze1;i++)
		{
			printf("enter the array elelments: [%d]",i);
			scanf("%d",&ary1[i]);
		}
	}
	
	printf("enter the size of second array: ");
	scanf("%d",&sze2);
	if(sze2<100)
	{
		for(int j=0;j<sze2;j++)
		{ 
			printf("enter the array elelments: [%d]",j);
			scanf("%d",&ary2[j]);
		}
	}
	printf("\n");
	
	display(ary1,sze1);
	
	printf("\n");
	
	display(ary2,sze2);
	
	printf("\n");
	
	printf("first array after sorting: ");
	sort(ary1,sze1);
	display(ary1,sze1);
	
	
	printf("\n");
	
	printf("second array after sorting:");
	sort(ary2,sze2);
	display(ary2,sze2);
	
	printf("\n");
	
	printf("array after merging: ");
	merge_array(ary1,sze1,ary2,sze2,ary3);
	display(ary3,sze1+sze2);

	printf("\n");

	printf("merged array after sorting: ");
	sort(ary3, sze1 + sze2);
	display(ary3, sze1 + sze2);
	 


}

