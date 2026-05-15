#include <stdio.h>
#include<conio.h>
int main() 
{
    int i, num, max;

    printf("Enter 7 numbers");

    for(i = 1; i <= 7; i++)
    {
        scanf("%d", &num);
        
        if (num > max )
        {
          max=num;
        }
    }

    printf("maximum  number of = %d", max);
    
    getch();7
    return 0;
}