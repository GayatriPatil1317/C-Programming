#include <stdio.h>
#include <conio.h>

int main()
{
     int num1=0,num2=0;
 up:
    printf("\n enter 2 integer number=");
    scanf("%d%d",&num1,&num2);

    if(num1==num2)
    {
        printf("\n both given numbers are equal,\n please enter different numbers to compare");
        goto up;
    }

    if(num1>num2)
    {
        printf("\n number%d is maximum",num1);
    }
    else
    {
       printf("\n number%d is maximum",num2);
    }

    printf("\n Thanks..!!");

    getch();
    return 0;

}
