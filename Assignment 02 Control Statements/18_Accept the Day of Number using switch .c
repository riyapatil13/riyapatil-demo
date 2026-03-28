#include<stdio.h>
int main ()
{
    int day;
    printf ("\n Enter the day");
    scanf ("%d",&day);
    
    switch (day)
    {
      case 1:
      printf("\n Day of Monday");
      break;
      
      case 2:
      printf("\n Day of Tuesday");
      break;
      
      case 3:
      printf("\n Day of wensaday");
      break;
      
      case 4:
      printf("\n Day of Thursday ");
      break;
      
      case 5:
      printf("\n Day of Friday");
      break;
      
      case 6:
      printf("\n Day of Saturday");
      break;
      
      case 7:
      printf("\n Day of Sunday");
      break;
      
      default:
      printf("\nInvalid Number");
      
    }
    
    return 0;
    
}