#include <stdio.h>

int main()
{
    int num = 0, i = 1, lrg;

    printf("Enter number 1: ");
    scanf("%d", &num);
    lrg = num; 

    while (i < 5) 
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);

        if (num > lrg)
        {
            lrg = num;
        }
        i++;
    }

    printf("Largest number is: %d\n", lrg);
    return 0;
}

