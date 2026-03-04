#include <stdio.h>
#include <conio.h>
int main()
{  
   float Km , Meter ;
   
   printf("\n\tEnter the kilomitar");
   scanf("%f",&Km);
   
   Meter= Km*1000; 
   
   printf ("\n meter of =%0.2f",Meter);
   
   getch ();   
   return 0;   
}   