#include<stdio.h>


int main()
{
 int Num;

 printf("\nEnter the Number");
 scanf("%d",&Num);

 if(Num % 7 == 0  &&  Num %5 == 0) 
 {
 printf("\n the Number  is Divisible By Both 5 and 7");
 }
 else if(Num % 5 == 0)
 {
 printf("\n the Number is  Divisible By 5");
 }
 else if(Num % 7 == 0)
 {
 printf("\n the Number is not divisible By Only 7");
 }
 else
 {
 printf("\n  the Number is not divisible by both 5 and 7");
 }
 
 return 0;
}