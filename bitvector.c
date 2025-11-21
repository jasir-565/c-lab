#include<stdio.h>
#include<ctype.h>

char U[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char set1[26],set2[26];
int bit_vect1[26],bit_vect2[26],result[26];

void initilize()
{
	for(int i=0;i<26;i++)
	{
		bit_vect1[i]=0;
		bit_vect2[i]=0;
		result[i]=0;
	}
}

void bitVector(char ary[26], int bit[26], int num)
{
	for(int j=0;j<num;j++)
	{
		for(int k=0;k<26;k++)
		{
			char c = tolower(ary[j]);
			if(c == U[k])
			{
				bit[k] = 1;
			}
		}
	}
}

void Union(int bit_vect1[26],int bit_vect2[26])
{
	for(int i=0;i<26;i++)
	{
		result[i]=bit_vect1[i] | bit_vect2[i];
	}
}

void inter(int bit_vect1[26],int bit_vect2[26])
{
	for(int i=0;i<26;i++)
	{
		result[i]=bit_vect1[i] & bit_vect2[i];
	}
}

void complement(int bit[26])
{
	for(int i=0; i<26; i++)
	{
		if(bit[i] == 0)
		{
			result[i] = 1;
		}
		else
		{
			result[i]=0;
		}
	}
}
void setDifference(int bit_vect1[26], int bit_vect2[26])
{
    for (int i = 0; i < 26; i++) 
    {
        result[i] = bit_vect1[i] & (!bit_vect2[i]);
    }
}

void bitdisplay(int bit[26])
{
	for(int i=0; i<26; i++)
	{
		printf("%d",bit[i]);
	}
}

void display(char ary[26])
{
	for(int i=0; i<26; i++)
	{
		printf("%c",ary[i]);
	}
}
void display1(int result[26])
{
	for(int i=0; i<26; i++)
	{
		printf("%c",result[i]);
	}
}

int main()
{
	int num1,num2;
    int ch;
	initilize();

	printf("Enter the number of elements in set 1:");
	scanf("%d",&num1);
	printf("enter the set 1 elements :");
	for(int i=0; i<num1;i++)
	{
		scanf(" %c",&set1[i]);
	}

	printf("Enter the number of elements in set 2:");
	scanf("%d",&num2);
	printf("enter the set 2 elements :");
	for(int i=0; i<num2;i++)
	{
		scanf(" %c",&set2[i]);
	}

	bitVector(set1, bit_vect1, num1);
	bitVector(set2, bit_vect2, num2);

	while(1)
	{
	    printf("\n1.Union\n2.Intersection\n3.Complement Set1\n4.Complement Set2\n5.set diffrence\n6.Exit\n");
	    printf("Enter choice: ");
	    scanf("%d", &ch);
	    switch(ch)
	    {
	        case 1:
	            Union(bit_vect1, bit_vect2);
	            bitdisplay(result);
	            printf("\n");
	            break;
	        case 2:
	            inter(bit_vect1, bit_vect2);
	            bitdisplay(result);
	            printf("\n");
	            break;
	        case 3:
	            complement(bit_vect1);
	            bitdisplay(result);
	            printf("\n");
	            break;
	        case 4:
	            complement(bit_vect2);
	            bitdisplay(result);
	            printf("\n");
	            break;
	        case 5:
		    setDifference(bit_vect1, bit_vect2);
		    bitdisplay(result);
		    printf("\n");
		    break;

	        case 6:
	            return 0;
	    }
	}
	return 0;
}

