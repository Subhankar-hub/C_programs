#include<stdio.h>
int main()
{
    int v,c=0,t=0;
    printf("Enter An Integer (9999 To End): ");
    scanf("%d",&v);
    while(v !=9999)
    {
        t +=v;
        ++c;
        printf("Enter Next Integer (9999 To End): ");
        scanf("%d",&v);
    }
    if(c !=0)
    {
        printf( "\nThe Average Is: %2f\n",(double)t/c);
    }
    else
    {
        printf("\nNo Values Were Entered.\n");
    }
    getch();
}
