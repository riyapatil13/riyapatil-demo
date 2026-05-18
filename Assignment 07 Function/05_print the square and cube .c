#include<stdio.h>
#include<conio.h>

void SquareCube(int no)
{
    int square, cube;

    square = no * no;
    cube = no * no * no;

    printf("Square = %d\n", square);
    printf("Cube = %d", cube);
}

int main()
{
    int no;

    printf("Enter  the Number");
    scanf("%d", &no);

    SquareCube(no);
    
    getch ();
    return 0;
}