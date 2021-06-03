#include<stdio.h>
#include<math.h>
int main()
{
    int i=1,j=1,n,sum=0;
    printf("Enter the count: ");
    scanf("%d",&n);
    while (i<=n)
    {
        j=pow(i,i);
        sum=sum+j;
        printf("%d\t",j);
        i++;
    }
    printf("The sum of the given series is: %d",sum);
}
