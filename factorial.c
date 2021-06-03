#include<stdio.h>
int main()
{
    int i=1; int n; int p=1;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    while (i<=n)
    {
        p=p*i;
        printf("%d\t",p);
        i++;
    }
}
