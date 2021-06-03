#include<stdio.h>
#include<conio.h>
//Structure and Union: For storing values of different datatypes;
//Array  For storing values of same datatypes;
int main()
{
    struct student
    {
     char name[10];
     int rollno;
    };

    struct student a;
    printf("Enter the name of student: ");
    scanf("%s", &a.name);
    printf("Enter the roll number of the student : ");
    scanf("%d", &a.rollno);
    printf("\nThe name and rool no. of the student are: %s and %d respectively", a.name, a.rollno);
}
