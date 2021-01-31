#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Dig=0,Temp=0,RevNum=0;

    printf("Enter an Integer No to check whether it is palindrome number:");
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

    if(No==RevNum)
    {
        printf("\n As %d==%d",No,RevNum);
        printf("\n given number %d is palindrome",No);
    }
    else
        {
          printf("\n As %d!=%d",No,RevNum);
          printf("\n given number %d is not palindrome",No);
        }

    getch();
    return 0;
}
