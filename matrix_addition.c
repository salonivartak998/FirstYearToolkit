#include <stdio.h>

int main()
{
    int A[10][10], B[10][10], C[10][10];
    int i, j, rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of first matrix:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("\nResultant Matrix:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
