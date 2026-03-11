#include <stdio.h>
#include <conio.h >

int main() 
{
    int num;
    printf ("\n\tEnter the Number");
    scanf("%d",&num);
    
    if (num%2==0)
    
    {
       printf("\n\t Number is  even");
    }
    
    else

    {
        printf("\n\t Number is odd");
    }
    
    getch();
    return 0;
    
}