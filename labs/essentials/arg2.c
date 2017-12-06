#include<stdio.h>
#include<stdlib.h>

//globals
float bal, amount;

//prototype declarations
void initAccount();
void getBalance(void);
void askCustomer(void);
void updateAccount(float value);
void gift(float giftAmount);

int main(void){
    initAccount();
    getBalance();
    //perform first transaction
    askCustomer();
    updateAccount(amount);
    getBalance();
    //perform second transaction
    askCustomer();
    updateAccount(amount);
    gift(5.0);
    getBalance();
    //perform 3rd transaction    
    askCustomer();
    updateAccount(amount);
    gift(2.0);
    getBalance();
    thankYou();
    return 0;
}

void initAccount(void){
    bal = 0.0;
}

void gift(float giftAmount){
    bal += giftAmount;
    printf("Congrats! A gift of %.2f has been added to your account\n", giftAmount);
}

void askCustomer(void){
    printf("Next transaction please . . . \n");
    printf("Enter amount to credit (positive) or debit (negative):");
    scanf("%f", &amount);
}

void getBalance(void){
    printf("\nThe current balance in the account is $%.2f\n", bal);
}

void updateAccount(float amount){
    bal += amount;
    printf("the accont ws updated with $%.2f\n", amount);
}

void thankYou(void){
    printf("---- Thank you -----\n");
}
