//npr= n!/(n-r)!
//ncr = n!/((n-r)!r!)

#include<stdio.h>
int main()
{
    int fact(int p);
    int n=0,r=0, npr, ncr;
    do
    {
    printf("\nEnter the value of n: ");
    scanf("%d", &n);
    printf("\nEnter the value of r: ");
    scanf("%d", &r);
    npr = fact(n)/(fact(n-r));
    ncr = fact(n)/(fact(n-r) * fact(r));

    }
    while (n<0 || r<0 || n<r);
    printf("\nThe value of npr is %d, ncr is %d: ", npr, ncr);
}

int fact(int p)
{
    int result;
    if(p == 0)
        result = 1;
    else
    {
        result = p * fact(p-1);
    }
    return result;
}
