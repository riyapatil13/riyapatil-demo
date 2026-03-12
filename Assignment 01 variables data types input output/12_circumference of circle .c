#include<stdio.h>
#include<conio.h>

int main()
{
    float Rad,Circum,PI = 3.14;

    printf("\n Enter Radius Of Circle");
    scanf("%f",&Rad);

    Circum = 2*PI*Rad ;

    printf("\n circumference Circle with radius = %0.2f",  Circum);
  
    getch ()
    return 0;
}