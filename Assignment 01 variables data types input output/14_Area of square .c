#include <stdio.h>
#include <conio.h>
int main()
{  
   float  S, Area ;
   
   printf("\n\tEnter the side");
   scanf("%f",&S);
   
   Area = S*S; 
   
   printf ("\n Area of =%0.2f",Area);
   
   getch ();
   return 0;   
   
}