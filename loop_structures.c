//Similarities between while, do while and for loop structures
#include<stdio.h>
//Print the natural numbers up to n
int main()
{
    int n,i;
    printf("Enter the value n: ");
    scanf("%d",&n);
    printf("\n");
    //1.while
    i = 1;
    while(i<=n)
    {
        printf("%d\t", i);
        i++;
    }
    //2. Do while
    i = 1;
    printf("\n");
    do
    {
        printf("%d\t", i);
        i++;
    }
    while (i<=n);
    //3. for
    printf("\n");
    for(i=1; i<=n; i++)
    {
        printf("%d\t", i);
    }
}
