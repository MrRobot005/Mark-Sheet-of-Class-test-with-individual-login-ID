#include<stdio.h>
int main()
{
    int id,pass,i,S,avg;
    for(;;)
    {
        printf("Enter your Login ID:\t");
        scanf("%d",&id);
       //fun();
        scanf("%d",&id);
        printf("Id %d enter your password for login:\t",id);
        scanf("%d",&pass);
        if(id==180201001 && pass==180201001)
        {
            fun();
            printf("Wellcome id no %d",id);

        }
        if(id==180201002 && pass==180201002)
        {
            fun();
            printf("Wellcome id no %d",id);

        }
        if(id==180201003 && pass==180201003)
        {
            fun();
            printf("Wellcome id no %d",id);

        }
        if(id==180201004 && pass==180201004)
        {
            fun();
            printf("Wellcome id no %d",id);

        }

        if(id==180201005 && pass==180201005)
        {
            fun();
            printf("Wellcome id no %d",id);

        }
        else
            printf("Wrong password");
        printf("\nDo you want to know about other ID :");
        char Y,N,n;
        fflush(stdin);
        scanf("%c",&Y);
        fflush(stdin);
        if(Y!='Y' && Y!='y')
        {
            printf("Thank you for your query.Peep on if needed.");
            break;
        }
    }
}
