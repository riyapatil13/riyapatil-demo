#include <stdio.h>
#include <conio.h>
int main()
{  
   float Celsius, Fahrenheit;
   
   printf("\n\tEnter the Fahrenheit ");
   scanf("%f",& Fahrenheit);
   
   Celsius= (Fahrenheit-32)*5.0/9.0; 
   
   printf ("\n Celsius =%0.2f",Celsius);
   
   getch ();
   return 0;   
}   