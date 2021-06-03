#include<stdio.h>
int main()
{
    int s=0,i,sign=-1; int n;
    printf("Enter The value of n: ");
    scanf("%d",&n);
    for(i=1; i<=n; i=i+2)
    {
        sign=-sign;
        s=s+i*sign;
    }
    printf("%d",s);
}
