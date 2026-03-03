#include <stdio.h>
#include <conio.h>
int main()
{  
   int no1,no2,multi ;
   
   printf("\n\tEnter the number");
   scanf("%d",&no1);
   
   printf("\n\tEnter the number");
   scanf("%d",&no2);
   
   multi = no1* no2;
   
   printf("multiplication of %d*%d=%d",no1,no2,multi);
   
   getch() ;
   return 0;   
   
}