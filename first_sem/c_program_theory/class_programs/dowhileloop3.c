#include<stdio.h>
int main(){
    int accno=1000;
    float balance=500;
    int option;
    int dep;
    int withdraw;
    int accountview;
    int accno2;
    float balance2;
    float balance3;
    do
    {

    printf("----welcome to my bank----");
    printf("1.deposit\n");
    printf("2.withdraw\n");
    printf("3.acc info\n");
    printf("4.exit\n");
    printf("enter your option:");
    scanf("%d & option");
    switch (option)
    {
    case 1:
    printf("enter your acc no:");
    scanf("%d",accno2);
    if (accno==accno2)
    {
        printf("accont is valid");
    }
    else
    {
            printf("acc is invalid");
            break;
    }
    printf("enter deposit amount:");
    scanf("%d,&dep");
    printf("account updated\n");
    balance2=balance+dep;
    printf("the balance is %f",balance2);
    break;
    case 2:
    //withdraw
    printf("enter your acc no:");
    scanf("%d",accno2);
    if (accno==accno2)
         printf("valid account number");
         printf("enter withdraw amount");
         scanf("%d",&withdraw);
         if (withdraw <= balance){
             balance=balance - withdraw;
             printf("account updated.current amount: %d",balance);
         }
        else{
            printf("insufficient balance2\n");
            }
    }
    break;
    case 3: printf("enter your acc no:");
    scanf("%d",accno2);
    if (accno==accno2)
    {
            printf("accont is valid");
    }
     else
    {
            printf("acc is invalid");
            break;
    }
    printf("your account no is %d",accno);
    scanf("your current balance is:%f",balance);
    break;
     default:
    printf("thank you for visiting the bank");
    break;
    }
    while (
    }
    
}
