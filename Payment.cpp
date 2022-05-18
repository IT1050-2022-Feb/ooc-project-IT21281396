
#inculde"Order.h"
#include<iostream>
usingnamespace std;
#include<cstring>


Payment::Payment()
{
P_ID = 0;
strcpy(P_type,"");
P_Amount = 0;
}
Payment::Payment(int p_Id,char p_type[],char p_Amount[]);
{
P_ID = p_ID ;
strcpy(P_type, "p_type");
 P_Amount = p_Amount;
}
void Payment::checkPayment(Order*p)
{
}
void Payment::confirmPayment()
{
}
void Payment::displayPaymentDetails()
{
}
Payment::~Payment()
{
//Destructor 
}
