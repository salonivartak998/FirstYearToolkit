#include <stdio.h>

int main()
{
    int a = 1, i, num;

    printf("Enter a number:");
    scanf("%d", &num);

    for(i = 1; i <= num; i++)
    {
        a = a * i;
    }

    printf("\nYour factorial of given number is %d", a);

    return 0;
}
