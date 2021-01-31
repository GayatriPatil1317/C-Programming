#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Dig=0,RevNum=0,Temp=0,Dcnt=0;

    printf("Enter 4 Digit Integer No to get its Reverse Number:");
    scanf("%d",&No);

    Temp=No;

    if(No<0)
    {
        printf("Number is invalid");return-1;
    }
    while(Temp>0)
    {
        Dig=Temp%10;
        Dcnt++;
        Temp=Temp/10;
    }
    if(Dcnt==4)
    {
        Temp=No;
        while(Temp>0)
        {
          Dig=Temp%10;
          RevNum=(RevNum*10)+Dig;
          Temp=Temp/10;
        }
        printf("\n Given 4 Digit Number in Reverse Way%d=%d",No,RevNum);
    }
    else
        {
          printf("\n Given Number is Not 4 Digit Number");
        }

    getch();
    return 0;
}
