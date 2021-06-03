#include<stdio.h>
int main()
{
    int i, smallest;
    printf("Enter the no of integers: ");
    scanf("%d",&i);
    printf("Enter the integer: ");
    scanf("%d",&smallest);
    for (int b; i > 1; i--)
    {
        scanf("%d",&b);
        if(b < smallest)
            smallest = b;
    }
    printf("Smallest integer is: %d", smallest);
}
