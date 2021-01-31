#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Dig=0,Dsum=0,Temp=0,Dcnt=0;

    printf("Enter an Integer No to calculate Digit Sum:");
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

    //after above loop temp becomes 0...so we have to reset it for further execution

    if(Dcnt==3)
    {
        Temp=No;  //reset temp
        while(Temp>0)
        {
          Dig=Temp%10;
          Dsum=Dsum+Dig;
          Temp=Temp/10;
        }
        printf("sum of digits in given number %dis=%d",No,Dsum);
    }
    else
        {
          printf("\n given number is not 3 digit no.");
        }

    getch();
    return 0;
}
