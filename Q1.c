#include<stdio.h>
int main()
{
    int n1, n2, n3, sum=0;
    printf("\nEnter a number:");
    scanf("%d",&n1);
    for (n2 = 1; n2 <= n1; n2++)
    {
        printf("Enter a number:");
        scanf("%d",&n3);
        sum=sum+n3;
    }
    printf("\nThe sum of the subsequent values after first integer are: %d",sum);
    getch();
}
