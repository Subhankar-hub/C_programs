#include<stdio.h>
int main()
{
    int n; int i=1; int var=1;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    while (i<=n)
    {
        printf("%d\t",var);
        var=2*var;
        i++;
    }
}
