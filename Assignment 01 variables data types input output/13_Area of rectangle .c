#include <stdio.h>
#include <conio.h>
int main()
{  
   float  W , H , Area ;
   
   printf("\n\tEnter the Width");
   scanf("%f",&W);
   
   printf("\n\tEnter the Haight");
   scanf("%f",&H);
   
   Area =  W*H; 
   
   printf ("\n Area of =%0.2f",Area);
   
   getch ();
   return 0;   
   
}