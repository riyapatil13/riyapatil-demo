#include <stdio.h>
#include <conio.h >
int main()
{     
    int sub1,sub2 ,sub3 ,Total ;
    float per ;
    printf ("\n\tEnter the subject marks");
    scanf ("%d",&sub1);
    
    printf ("\n\tEnter the subject marks ");
    scanf ("%d",&sub2);
    
    printf ("\n\tEnter the subjectmarks");
    scanf ("%d",&sub3);
    
    Total = sub1 +sub2 +sub3 ;
    
    printf ("\n Totalof marks=%d",Total);
    
    per=Total/3.0 ;
    
    printf ("\n percentage of=%0.2f",per);
    
    getch();
    return 0;
    
}