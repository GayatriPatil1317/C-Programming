#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,j=0,c=0;
    int no=0,Temp=0;

    printf("\n enter column value for pattern is=");
    scanf("%d",&c);

    printf("\n enter no to print table in column format =");
    scanf("%d",&no);

    Temp=no;

    for(i=1;i<=c;i++)
    {
        no=Temp;
        for(j=1;j<=c;j++)
        {
        if(i>=j)
        {
            printf(" %-3d ",no);
            no=no+Temp;

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
