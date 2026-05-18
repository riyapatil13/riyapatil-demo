#include<stdio.h>
#include<conio.h>

void Circle(float radius)
{
    float area, circumference;

    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;

    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f", circumference);
}

int main()
{
    float radius;

    printf("Enter the  Radius ");
    scanf("%f", &radius);

    Circle(radius);
    
    getch ();
    return 0;
}