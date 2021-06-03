#include<stdio.h>
int main()
{
    int i=1; int n; int p=1; int x=1;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    while (i<=n)
    {
        x=x*i;
        p=p*2;
        printf("%d/%d\t", x, p);
        i++;
    }
}
