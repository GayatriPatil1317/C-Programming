#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,j=0,c=0;
    int no=1;


    printf("\n enter column value for pattern is=");
    scanf("%d",&c);

    for(i=1;i<=c;i++)
    {
        for(j=1;j<=c;j++)
        {
        if(i>=j)
        {
            printf(" %-3d ",no);
            no++;

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
