#include <stdio.h>
#include <conio.h >

int main() 
{
    int num;
    printf ("\n\tEnter the Number");
    scanf("%d",&num);
    
    if (num>0)
    
    {
       printf("\n\t Number is  positive");
    }
    
    else

    {
        printf("\n\t Number is negative");
    }
    
    getch();
    return 0;
    
}