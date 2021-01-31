#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Dig=0,Temp=0,RevNum=0;

    printf("Enter an Integer No to get it's Reverse number:");
    scanf("%d",&No);

    Temp=No;

    if(No<0)
    {
        printf("Number is invalid");return-1;
    }
    while(Temp>0)
    {
        Dig=Temp%10;
        RevNum=(RevNum*10)+Dig;
        Temp=Temp/10;
    }
    printf("\n Reverse of given number %dis=%d",No,RevNum);

    getch();
    return 0;
}
