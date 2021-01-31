#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,j=0,c=0;
    int no=0;

    printf("\n enter column value for pattern is=");
    scanf("%d",&c);

    printf("\n enter integer number to be printed in lower triangular pattern=");
    scanf(" %d",&no);

    for(i=1;i<=c;i++)
    {
        for(j=1;j<=c;j++)
        {
        if(i>=j)
        {
            printf(" %d ",no);

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
