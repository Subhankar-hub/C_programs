//Functions
#include<stdio.h>
int main()
{
    int n,fact,i;
    //Function in C is like same mathematical functions
    //Write a function to calculate factorial of a number
    printf("Enter the value of n: ");
    scanf("%d", &n);
    //calculate
    if (n<=0)
    {
        printf("Enter a valid number!");
        exit(0);
    }
    if (n==0 || n==1)
        fact = 1; //!0 = !1=1
    else
    {
        fact =1;
        for(i=1; i<=n;i++)
        {
            fact = fact * i;
        }
    }
}
