#include <stdio.h>
#include <stdlib.h>

int main()
{
     int num=0;

    printf("\n enter an integer number=");
    scanf("%d",&num);

    (num==0)? printf("\n Given number is neutral"):(num%2==0)?printf("\n Given number is even"):printf("\n Given number is odd");

    getch();
    return 0;

}
