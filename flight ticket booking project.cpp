#include<stdio.h>
int main()
{
    int pass, seat, booked;
    char user[500];
    printf("Your name: ");

    gets(user);
    printf("Enter this fixed password (123): ");
    scanf("%d", &pass);

    switch(pass)
    {
        case 123:
        printf("\n\t\t\tWelcome to ticket booking system\n");
        printf("\n\t\t\tAvailable sea: 6 \t Booked seat:0\n");
        printf("\n\t\t\tPress 1 for booked \t Press any keyword for cancel\n");
        printf("\n\t\t\tPlease say us what you want.....\n");

        scanf("%d", &seat);
        switch(seat)
        {
            case 1:
            printf("\n\t\t\t Please select your seat number\n");
            printf("\n\t\t\t 1\t 2\t 3\t \n\n \t\t\t 4\t 5\t 6\t \n");
            
            scanf("%d", &booked);
            switch(booked)
            {
                case 1:
                printf("\n \t\t\t %s, You've Booked seat: 1\n",user);
                printf("\n \t\t\t Available seat: 5  Booked seat: 1\n");
                
                //--------------Payment processing
                printf("\n \t\t\t Let's proceed for payment......\n");
                printf("\n \t\t\tEnter this fixed payment (123): ");
                scanf("%d", &pass);
                switch(pass)
                {
                	case 123:
                		printf("\n \t\t\tYour Payment is successful. Happy journey.\n");
                		break;
                    default:
                		printf("\n \t\t\tpayment failed. Try again later..... Press any key.....\n");
				}
                break;
                
                case 2:
                printf("\n \t\t\t %s,You've Booked seat: 2\n",user);
                printf("\n \t\t\t Available seat: 5  Booked seat: 1\n");
                
                //--------------Payment processing
                printf("\n \t\t\t Let's proceed for payment......");
                printf("\n \t\t\tEnter this fixed payment (123): ");
                scanf("%d", &pass);
                switch(pass)
                {
                	case 123:
                		printf("\n \t\t\tYour Payment is successful. Happy journey.\n");
                		break;
                    default:
                		printf("\n \t\t\tpayment failed. Try again later..... Press any key.....\n");
				}
                break;
                
                case 3:
                printf("\n \t\t\t %s,You've Booked seat: 3\n",user);
                printf("\n \t\t\t Available seat: 5  Booked seat: 1\n");
                
                //--------------Payment processing
                printf("\n \t\t\t Let's proceed for payment......");
                printf("\n \t\t\tEnter this fixed payment (123): ");
                scanf("%d", &pass);
                switch(pass)
                {
                	case 123:
                		printf("\n \t\t\tYour Payment is successful. Happy journey.\n");
                		break;
                    default:
                		printf("\n \t\t\tpayment failed. Try again later..... Press any key.....\n");
				}
                break;
                
                case 4:
                printf("\n \t\t\t %s,You've Booked seat: 4\n",user);
                printf("\n \t\t\t Available seat: 5  Booked seat: 1\n");
                
                //--------------Payment processing
                printf("\n \t\t\t Let's proceed for payment......");
                printf("\n \t\t\tEnter this fixed payment (123): ");
                scanf("%d", &pass);
                switch(pass)
                {
                	case 123:
                		printf("\n \t\t\tYour Payment is successful. Happy journey.\n");
                		break;
                    default:
                		printf("\n \t\t\tpayment failed. Try again later..... Press any key.....\n");
				}
                break;
                
                case 5:
                printf("\n \t\t\t %s,You've Booked seat: 5\n",user);
                printf("\n \t\t\t Available seat: 5  Booked seat: 1\n");
                
                //--------------Payment processing
                printf("\n \t\t\t Let's proceed for payment......");
                printf("\n \t\t\tEnter this fixed payment (123): ");
                scanf("%d", &pass);
                switch(pass)
                {
                	case 123:
                		printf("\n \t\t\tYour Payment is successful. Happy journey.\n");
                		break;
                    default:
                		printf("\n \t\t\tpayment failed. \tTry again later.....\n");
				}
                break;
                
                case 6:
                printf("\n \t\t\t %s,You've Booked seat: 6\n",user);
                printf("\n \t\t\t Available seat: 5  Booked seat: 1\n");
                printf("\n \t\t\t Let's proceed for payment......\n");
                
                //--------------Payment processing
                printf("\n \t\t\tEnter this fixed payment (123): ");
                scanf("%d", &pass);
                switch(pass)
                {
                	case 123:
                		printf("\n \t\t\tYour Payment is successful. Happy journey.\n");
                		break;
                    default:
                		printf("\n \t\t\tpayment failed. \tTry again later..... \n");
				}
                
                break;
                

                default:
                printf("\n\t\t\t Invalid seat number\n");
            }
            break;

            default:
            printf("\n \t\t\t Are you sure you want to close it.... Press any key\n");

        }
        break;

        default:
        printf("\n\t\t\t\t Oops... you're trying something wrong\n");
    }
}

