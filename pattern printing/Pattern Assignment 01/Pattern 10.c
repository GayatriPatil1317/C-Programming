#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,j=0,c=0;
    char ch='\0';

    printf("\n enter column value for pattern is=");
    scanf("%d",&c);

    printf("\n enter character to be printed in lower triangular pattern=");
    scanf(" %c",&ch);

    for(i=1;i<=c;i++)
    {
        for(j=1;j<=c;j++)
        {
        if(i>=j)
        {
            printf(" %c ",ch);

        }
        else
        {
            printf("   ");
        }
        }
         printf("\n");

    }
    getch();
    return 0;
}
