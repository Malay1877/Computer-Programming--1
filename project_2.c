// ATM simulation.

#include<stdio.h>
#include<string.h>

int main(){
    int choice;
    int balance=100000,amount;
    char pass[10]="Malay1877";
    char password[10];
    int attempt = 0;
    int retry = 1;

    printf("\n1.Check balance\n2.Deposit amount\n3.Withdraw amount\n4.Exit\n");

    while(retry){
        scanf("%d" , &choice);
        if(choice==1){
            printf("Enter the password\n");
            scanf("%s" , &password);

            while(attempt<=3 && strcmp(password, pass) != 0){
                printf("Wrong password\n");
                printf("Enter the right password");
                scanf("%s" , &password);
                if(strcmp(password, pass) == 0){
                    break;
                }
                else{
                    attempt++;
                }

            }
            if(attempt>3){
                printf("Contact the admin\n");
            }
            if(strcmp(password, pass) == 0){
                printf("The balance in the account is %d rupees\n" , balance);
            }
            printf("Do you want to retry ---> 1 to Retry and 0 to not retry\n");
            scanf("%d", &retry);
        }
        else if(choice==2){
              printf("Enter the password\n");
              scanf("%s" , &password);
            while(strcmp(password, pass) != 0 && attempt<=3){
                printf("Wrong password\n");
                scanf("%s" , &password);
                attempt++;
            }
            if(attempt>3){
                printf("Contact the admin\n");
            }
            if(strcmp(password, pass) == 0){
                printf("Enter the amount to be deposited\n");
                scanf("%d" , &amount);
                balance+=amount;
                printf("Total balance is %d\n" , balance);
            }
            printf("Do you want to retry ---> 1 to Retry and 0 to not retry\n");
            scanf("%d", &retry);
        }
        else if(choice==3){
             printf("Enter the password\n");
             scanf("%s" , &password);
            while(strcmp(password, pass) != 0 && attempt<=3){
                printf("Wrong password\n");
                scanf("%s" , &password);
                attempt++;
            }
            if(attempt>3){
                printf("Contact the admin\n");
            }
            if(strcmp(password, pass) == 0){
                printf("Enter the amount to be withdrawn\n");
                scanf("%d" , &amount);
                if(amount>balance){
                    printf("Insufficient balance\n");
                }
            else if(amount<=balance){
                balance-=amount;
                printf("The balance after the withdrawel is %d\n" , balance);
            }
        }
        printf("Do you want to retry ---> 1 to Retry and 0 to not retry\n");
            scanf("%d", &retry);
    }
        else if(choice==4){
            break;
        }
        else{
            printf("Wrong input");
        }
    }

    printf("Exitting the ATM Thankyou!!");
    return 0;
}