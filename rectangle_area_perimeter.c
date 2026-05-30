#include<stdio.h>

int main()
{
    float length, width, area, peri;

    printf("Length of rectangle : \t");
    scanf("%f", &length);

    printf("width of rectangle : \t");
    scanf("%f", &width);

    area = (length * width);
    printf("\n The area of rectangle is %f", area);

    peri = 2 * (length + width);
    printf("\n The perimeter of rectangle is %f", peri);

    return 0;
}
