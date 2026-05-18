#include<stdio.h>
#include<conio.h>

int main()
{
   int i = 0, j = 0, s=0;
   
   printf("Enter the size");
   scanf("%d",&s);

   for(i = 1; i <= s; i++ )
   
       {
           for( j = 1; j <= s; j++ )
           {
               if(i == j || j == s || i+j== s+1)
                  {
                       printf(" * ");
                  }
                  else
                  {
                      printf("   ");
                  }
           }
                     printf("\n");
       }     
        
   getch ();
   return 0;
           
}