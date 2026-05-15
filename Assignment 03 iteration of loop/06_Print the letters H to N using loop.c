#include<stdio.h>
#include<conio.h>

int main()
{
       char ch='\0' ;
       printf ("Enter the Character");
       
       ch = 'H';
       
       for(ch ='H' ;ch<='N';ch++)
       
       {
           printf ("\n %c", ch );
       }
       
       getch();
       return 0;
}
