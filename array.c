#include<stdio.h>

int main()
{
    char name[10]; //arry of 10 char
    int num[20]; // arry of 10 inttegers
    float marks[10];
    int i;
    float avg;
    float count,sum=0;
    for(i=0; i<10; i++)
    {
        printf("\nEnter the next marks: ");
        scanf("%f", &marks[i]);
        count++;
        sum = sum + marks[i];
    }
    avg = sum/count;
    printf("\n The average of the 10 marks is: %5.2f", sum);
    printf("\n The average of the 10 marks is: %5.2f", avg);
}
