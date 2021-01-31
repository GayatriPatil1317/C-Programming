#include <stdio.h>
#include <conio.h>

int main()
{
     int sal=0,is_stud=0;

     printf("\n Enter your salary=");
     scanf("%d",&sal);

      printf("\n Enter 1 if you are a student=");
     scanf("%d",&is_stud);

     if(sal<=0)
     {
         if(is_stud==1)
            {
               printf("\n Candidate is student");
            }
         else
         {
            printf("\n Candidate is fresher");
         }
     }
     else
     {
         if(sal>5000)
         {
              printf("\n Candidate is expert employee");
         }
         else
         {
              printf("\n Candidate is biginner employee");
         }
     }

    getch();
    return 0;

}
