#include <stdio.h>
#include <conio.h>
 int main()
{  
   int N1,N2;
   
   printf ("\n\tEnter the number");
   scanf ("%d",&N1);
   
   printf ("\n\tEnter the number");
   scanf ("%d",&N2);
   
   printf("\n\t before swapping =%d,%d",N1,N2);
   
   N1=N1+N2; 
   N2=N1-N2;
   N1=N1-N2;  
   
   printf("\n\tafter swapping =%d,%d",N1,N2);
   
   getch();
   return 0;   
}   