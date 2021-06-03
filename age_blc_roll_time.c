#include<stdio.h>
int main()
{
    int i=0; char roll[20];
    float f; char block,d;
    printf("Enter your age");
    scanf("%d",&i);
    d=getchar();
    printf("\nEnter your block: ");
    scanf("%c",&block);
    printf("\nEnter roll no: ");
    scanf("%s",&roll);
    printf("\nEnter the time: ");
    scanf("%f",&f);
    printf("\nYour age is: %d \n Block is %c \n Roll no is: %s \n Time now is %f:",i,block,roll,f);
}
