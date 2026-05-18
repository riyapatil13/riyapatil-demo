#include<stdio.h>
#include<conio.h>

float PI()
{
    return 3.14;
}

int main()
{
    float value;

    value = PI();

    printf("Value of PI = %.2f", value);
    
    getch ();
    return 0;
}