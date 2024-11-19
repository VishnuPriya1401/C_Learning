#include<stdio.h>
int main()
{
    int num;
    char name[200];
    int age;

    printf("\n student data input");
    printf("\n Enter Name:");
    scanf("%s",&name);
    printf("\n Enter Roll number:");
    scanf("%d",&num);
    printf("\n Enter Age:");
    scanf("%d",&age);
    printf("\n Student details entered");
    printf("\n Name: %s",name);
    printf("\n Roll number: %d",num);
    printf("\n Age: %d",age);
}