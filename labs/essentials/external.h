#include<stdio.h>
#include<stdlib.h>
#ifndef EXTERNAL_H_
#define EXTERNAL_H_

float accountBalance, amount;

void initializeAccount();
void getBalance(void);
void askCustomer(void);
void updateAccount(float value);
void addGift(float giftAmount);
void thankYou(void);

#endif /* EXTERNAL_H_ */
