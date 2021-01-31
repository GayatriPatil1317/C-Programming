#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,j=0,c=0;

    printf("\n enter column value for upper right triangular pattern is=");
    scanf("%d",&c);

    for(i=1;i<=c;i++)
    {
        for(j=1;j<=c;j++)
        {
        if(i<=j)
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
    getch();
    return 0;
}
