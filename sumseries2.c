#include <stdio.h>
#include <math.h>

int main()
{
	int x,n,i;
	float sum=0;

	printf("Enter total number of terms: ");
	scanf("%d",&n);

	printf("Enter the value of x: ");
	scanf("%d",&x);

	for(i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            sum = sum-(1/pow(x,i-1));
            printf("-1/%d^%d",x,i-1);
        }
        else
        {
        sum= sum+(1/pow(x,i-1));
        printf("+1/%d^%d",x,i-1);
        }
	}

	printf("Sum of the series: %f\n",sum);
	return 0;
}
