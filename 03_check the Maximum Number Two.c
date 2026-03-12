#include<stdio.h>
#include<conio.h>
int main ()
{
   int No1 ,No2 ;
   printf ("\n\tEnter the Number");
   scanf ("%d",&No1);
   
   printf ("\n\tEnter the Number");
   scanf ("%d",&No2);
   
   if(No1>No2)
   {
       printf("first Number is maximum");
   }
   else
   {
       printf("second Number is maximum");
   }
   
   getch()
   return 0;
   
}