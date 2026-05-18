#include<stdio.h>
#include<conio.h >
int main ()
{
    int i,j,r,c;
    printf("\n Enter the row");
    scanf("%d",&r);
    
    printf("\n Enter the coloum");
    scanf("%d",&c);
    
    for (i=1;i<=r;i++)    
    {
        for (j=1;j<=c;j++)
        {
            printf (" * ");
        }
        printf("\n");
    }
    
    getch ();
    return 0;
    
    
}