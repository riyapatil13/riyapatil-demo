#include<stdio.h>
#include<conio.h>

int main()
{
    float Rad,Area,PI = 3.14;

    printf("\n Enter Radius Of Circle");
    scanf("%f",&Rad);

    Area = PI*Rad*Rad;

    printf("\n Area Circle with radius = %0.2f", Area);
  
    getch ()
    return 0;
}