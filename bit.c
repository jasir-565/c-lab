#include <stdio.h>

#define MAX 50   // maximum universal set size

void createSet(int set[], int n) {
    int i;
    for (i = 0; i < n; i++)
        set[i] = 0;   // initialize bit vector with zeros
}

void insertElements(int set[], int n) {
    int x, i, m;
    printf("Enter number of elements to insert: ");
    scanf("%d", &m);

    printf("Enter elements: ");
    for (i = 0; i < m; i++) {
        scanf("%d", &x);
        if (x >= 0 && x < n)
            set[x] = 1;
        else
            printf("Element %d out of range!\n", x);
    }
}

void displaySet(int set[], int n) {
    int i;
    printf("{ ");
    for (i = 0; i < n; i++) {
        if (set[i] == 1)
            printf("%d ", i);
    }
    printf("}\n");
}

void displayBitVector(int set[], int n) {
    int i;
    printf("[ ");
    for (i = 0; i < n; i++)
        printf("%d ", set[i]);
    printf("]\n");
}

void unionSet(int A[], int B[], int C[], int n) {
    int i;
    for (i = 0; i < n; i++)
        C[i] = A[i] | B[i];
}

void intersectionSet(int A[], int B[], int C[], int n) {
    int i;
    for (i = 0; i < n; i++)
        C[i] = A[i] & B[i];
}

void differenceSet(int A[], int B[], int C[], int n) {
    int i;
    for (i = 0; i < n; i++)
        C[i] = A[i] & (!B[i]);
}

int main() {
    int A[MAX], B[MAX], C[MAX];
    int n, choice;

    printf("Enter size of Universal Set (max %d): ", MAX);
    scanf("%d", &n);

    createSet(A, n);
    createSet(B, n);
    createSet(C, n);

    while (1) {
        printf("\n===== MENU =====\n");
        printf("1. Insert elements in Set A\n");
        printf("2. Insert elements in Set B\n");
        printf("3. Display Set A\n");
        printf("4. Display Set B\n");
        printf("5. Bit Vector of A\n");
        printf("6. Bit Vector of B\n");
        printf("7. Union (A ∪ B)\n");
        printf("8. Intersection (A ∩ B)\n");
        printf("9. Difference (A - B)\n");
        printf("10. Difference (B - A)\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            insertElements(A, n);
            break;
        case 2:
            insertElements(B, n);
            break;
        case 3:
            printf("Set A = ");
            displaySet(A, n);
            break;
        case 4:
            printf("Set B = ");
            displaySet(B, n);
            break;
        case 5:
            printf("Bit Vector of A = ");
            displayBitVector(A, n);
            break;
        case 6:
            printf("Bit Vector of B = ");
            displayBitVector(B, n);
            break;
        case 7:
            unionSet(A, B, C, n);
            printf("A ∪ B = ");
            displayBitVector(C, n);
            break;
        case 8:
            intersectionSet(A, B, C, n);
            printf("A ∩ B = ");
            displayBitVector(C, n);
            break;
        case 9:
            differenceSet(A, B, C, n);
            printf("A - B = ");
            displayBitVector(C, n);
            break;
        case 10:
            differenceSet(B, A, C, n);
            printf("B - A = ");
            displayBitVector(C, n);
            break;
        case 0:
            return 0;
        default:
            printf("Invalid choice!\n");
        }
    }
}

