#include<stdio.h>
main()
{
    float sum=0.00;
    int n,i;
    printf("Enter the count: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        float c=i;
        if(i%2==0)
        {
            sum=sum- 1/c;
            printf("+1/%d",i);
        }
        else
        {
            sum=sum+ 1/c;
            printf("+1/%d",i);
        }
    }
    printf("The sum is: %f",sum);
}
