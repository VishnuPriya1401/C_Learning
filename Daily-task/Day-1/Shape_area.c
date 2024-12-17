#include<stdio.h>
int main()
{
    int num;
    float area=0.0,s=0.0,l=0.0,b=0.0,base=0.0,height=0.0,r=0.0;

    printf("Area Menu");
    printf("\n1.Square \n2.Rectangle \n3.Triangle \n4.Circle \n5.Cylinder");
    printf("\nChoose your option:");
    scanf("%d",&num);
    switch (num)
    {
    case 1:
        printf("Enter the side of square:");
        scanf("%f",&s);
        area=s*s;
        printf("Area of Square is: %f",area);
        break;
    case 2:
        printf("Enter length and breath of a rectangle:");
        scanf("%f %f",&l,&b);
        area=l*b;
        printf("Area of Rectangle is: %f",area);
        break;
    case 3:
        printf("Enter the base and height of a triangle:");
        scanf("%f %f",&base,&height);
        area=0.5*base*height;
        printf("Area of Triangle is: %f",area);
        break;
    case 4:
        printf("Enter the radius of the circle:");
        scanf("%f",&r);
        area=3.14*r*r;
        printf("Area of Circle is: %f",area);
        break;
    case 5:
        printf("Enter the height and radius of cylinder:");
        scanf("%f %f",&height,&r);
        area=2*3.14*r*(height+r);
        printf("Area of Square is: %f",area);
        break;
    
    default:
        printf("Wrong Choise!");
        break;
    }
}