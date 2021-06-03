#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int a[10] = {10,20,30,40,50,60,70,80,90,100};
    int i, largest;
    largest = a[0];
    for(i = 0; i < 10; i++)
    {
        //printf("\n%d\t%d",a[i],&a[i]);
        if(largest < a[i])
        {
            largest = a[i];
        }
    }
    printf("The largest number in array: %d", largest);
}
