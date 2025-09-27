#include<stdio.h>
int main()
{
 int a,b;
 printf("Enter the first number");
 scanf("%d",&a);
 printf("Enter the second number");
 scanf("%d",&b);
 if(a>b)
   {
     printf("Largest of %d and %d is %d",a,b,a) ;
    }
  else
    {
      printf("Largest of %d and %d is %d",a,b,b);
     }
 return(0);
}
