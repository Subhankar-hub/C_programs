#include<stdio.h>
int main()
{
    float pie=3.14;
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f",&radius);
    float area = (pie* radius* radius);
    printf("\nThe area of circle is: %f", area);
}
