#include<stdio.h>
int main()
{
    int i;
    int j;
    int num;

    printf("Enter 5 numbers between 1 to 30: ");

    for(i=1;i<=5;i++)
    {
        scanf("%d", &num);

        for(j=1;j<=num;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
