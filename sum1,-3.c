#include<stdio.h>
int main()
{
    int i=1,j=1,n,sum=0;
    printf("Enter the Count: ");
    scanf("%d",&n);
    while (j<=n)
    {
        if(j%2==0)
        {
            sum=sum-i;
            printf("-%d\t",i);
        }
        else

        {
            sum=sum+i;
            printf("+%d\t",i);
        }
        i=i+2;
        j++;
    }
    printf("The sum is: %d",sum);
}
