#include<stdio.h>
int main()
{
    int i=1; int j=1; int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    while (j<=n)
    {
        printf("%d\t",i);
        i=i+2;
        j++;
    }
}
