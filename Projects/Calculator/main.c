#include "main.h"


int main()
{
    int bin = 0;
    float numA=0, numB=0;

entryMain:
    system("cls");
    printf("What are you want to do? \n [1]Addition\n [2]Subtraction \n [3]Multiplication \n [4] Division \n\n [#]Your choice > ");
    scanf("%d",&bin);

    if (bin==0)
    {
        printf("Sorry you must enter a value to continue...");
        system("pause>nul");
        goto entryMain;
    }
    else if (bin>4)
    {
        printf("Invalid Input -> %d is greater than the menu!");
    }
    else
    {
        if (bin==1)
        {
            printf("Enter first Number : ");
            scanf("%f",&numA);
            printf("Enter second Number : ");
            scanf("%f",&numB);
            
            printf("The addition of %.3f + %.3f is : %.3f",numA,numB,Add(numA,numB));

            re0:
            printf("\n\n\nWould you like to return to the main menu ? \n [1]Exit \n [2]Main Menu \n\n [#]Your Choice > ");
            scanf("%d",&bin);
            if(bin==0)
            {
                printf("Sorry you must enter a value to continue...");
                system("pause>nul");
                goto re0;
            }
            if(bin>2)
            {
                printf("Sorry I cant take %d as input",bin);
                system("pause>nul");
                goto re0;
            }
            else
            {
                if(bin==1)
                {
                    return 0;
                }
                else if(bin==2)
                {
                    goto entryMain;
                }
            }
        }
        else if(bin==2)
        {
            printf("Enter first Number : ");
            scanf("%f",&numA);
            printf("Enter second Number : ");
            scanf("%f",&numB);
            
            printf("The subtraction of %.3f - %.3f is : %.3f",numA,numB,Sub(numA,numB));

            re1:
            printf("\n\n\nWould you like to return to the main menu ? \n [1]Exit \n [2]Main Menu \n\n [#]Your Choice > ");
            scanf("%d",&bin);
            if(bin==0)
            {
                printf("Sorry you must enter a value to continue...");
                system("pause>nul");
                goto re1;
            }
            if(bin>2)
            {
                printf("Sorry I cant take %d as input",bin);
                system("pause>nul");
                goto re1;
            }
            else
            {
                if(bin==1)
                {
                    return 0;
                }
                else if(bin==2)
                {
                    goto entryMain;
                }
            }
        }
        else if(bin==3)
        {
            printf("Enter first Number : ");
            scanf("%f",&numA);
            printf("Enter second Number : ");
            scanf("%f",&numB);
            
            printf("The multiplication of %.3f * %.3f is : %.3f",numA,numB,Mul(numA,numB));

            re2:
            printf("\n\n\nWould you like to return to the main menu ? \n [1]Exit \n [2]Main Menu \n\n [#]Your Choice > ");
            scanf("%d",&bin);
            if(bin==0)
            {
                printf("Sorry you must enter a value to continue...");
                system("pause>nul");
                goto re2;
            }
            if(bin>2)
            {
                printf("Sorry I cant take %d as input",bin);
                system("pause>nul");
                goto re2;
            }
            else
            {
                if(bin==1)
                {
                    return 0;
                }
                else if(bin==2)
                {
                    goto entryMain;
                }
            }
        }
        else if(bin==4)
        {
            printf("Enter first Number : ");
            scanf("%f",&numA);
            printf("Enter second Number : ");
            scanf("%f",&numB);

            printf("The division of %f / %f is : %.3f",numA,numB,Div(numA,numB));

            re3:
            printf("\n\n\nWould you like to return to the main menu ? \n [1]Exit \n [2]Main Menu \n\n [#]Your Choice > ");
            scanf("%d",&bin);
            if(bin==0)
            {
                printf("Sorry you must enter a value to continue...");
                system("pause>nul");
                goto re3;
            }
            if(bin>2)
            {
                printf("Sorry I cant take %d as input",bin);
                system("pause>nul");
                goto re3;
            }
            else
            {
                if(bin==1)
                {
                    return 0;
                }
                else if(bin==2)
                {
                    goto entryMain;
                }
            }
        }
        
    }
    
    

    return 0;
}