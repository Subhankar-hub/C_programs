#include<stdio.h>
int main()
{
    float length, breadth, area;
    printf("Enter the length: ");
    scanf("%f",&length);
    printf("Enter the breadth: ");
    scanf("%f",&breadth);
    area = (length* breadth);
    printf("%f",area);
}
