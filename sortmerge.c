#include <stdio.h>

void display(int ary[], int size)
{
    printf("Array elements are: ");
    for (int i = 0; i < size; i++)
        printf("%d ", ary[i]);
    printf("\n");
}

void sort(int ary[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (ary[i] > ary[j])
            {
                int temp = ary[i];
                ary[i] = ary[j];
                ary[j] = temp;
            }
        }
    }
}

void merge_array(int ary1[], int size1, int ary2[], int size2, int ary3[])
{
    int i = 0;
    for (i = 0; i < size1; i++)
    {
        ary3[i] = ary1[i];
    }
    for (int j = 0; j < size2; j++)
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
    int size1, size2;

    printf("Enter the size of first array: ");
    scanf("%d", &size1);

    if (size1 <= 0 || size1 > 100)
    {
        printf("Invalid size for first array.\n");
        return 0;
    }

    for (int i = 0; i < size1; i++)
    {
        printf("Enter element [%d]: ", i);
        scanf("%d", &ary1[i]);
    }

    printf("Enter the size of second array: ");
    scanf("%d", &size2);

    if (size2 <= 0 || size2 > 100)
    {
        printf("Invalid size for second array.\n");
        return 0;
    }

    for (int j = 0; j < size2; j++)
    {
        printf("Enter element [%d]: ", j);
        scanf("%d", &ary2[j]);
    }

    printf("\nFirst array before sorting:\n");
    display(ary1, size1);

    printf("Second array before sorting:\n");
    display(ary2, size2);

    sort(ary1, size1);
    sort(ary2, size2);

    printf("\nFirst array after sorting:\n");
    display(ary1, size1);

    printf("Second array after sorting:\n");
    display(ary2, size2);

    merge_array(ary1, size1, ary2, size2, ary3);

    printf("\nArray after merging:\n");
    display(ary3, size1 + size2);

    sort(ary3, size1 + size2);

    printf("Merged array after sorting:\n");
    display(ary3, size1 + size2);

    return 0;
}

