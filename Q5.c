#include<stdio.h>
int main()
{
    int i;
    int product=1;

    for(i =1; i<=15; i+=2)
    {
        product = i*product;
        printf("%d\t", i);
    }
    printf("\nproduct: %d", product);
    return 0;
}
