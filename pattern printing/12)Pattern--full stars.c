#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,j=0,c=0;

    printf("\n enter column value for full stars pattern:");
    scanf("%d",&c);

    for(i=1;i<=c;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf(" * ");
        }
        printf("\n");
    }

    getch();
    return 0;
}
