#include <stdio.h>
int main()
{  
   int Num ;
   
   printf("\n\tEnter the number");
   scanf("\n%d",&Num);
   
   if(Num % 7 ==0)
   {
      printf ("Number is divisibleb by 7");
   }
   else
   {
      printf ("Number is not divisibleby 7");
   }
   
   return 0;   
   
}