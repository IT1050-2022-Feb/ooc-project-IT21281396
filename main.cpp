#include "Admin.h"
#include "Cart.h"
#include "Food.h"
#include "Payment.h"
#include "Order.h"
#include "RegisteredUser.h"
#include "UnregisteredUser.h"

#include <iostream>
#include <cstring>
using namespace std;

int main() {
  
UnregisteredUser unreg1;
RegisteredUser  reg1;
Admin Ad1;
Order* O1=new Order;
Payment* P1=new Payment;
Food* F1=new Food;
Cart* C1=new Cart;

  
 //----Method Calling------
  unreg1.displayDetails();

  reg1.login();
  reg1.logout();
  reg1.displayDetails();
  reg1.searchFood();

  
  Ad1.displayDetails();
  
  O1->calcBill();
  O1->displayBill();

  P1->checkPayment();
  P1->confirmPayment();
  P1->displayDetails();

  F1->displayItemDetails();
  F1->updateItemDetails();

  C1->cartDetails();

  delete unreg1;
  delete reg1;
  delete Ad1;
  delete O1;
  delete P1;
  delete F1;
  delete C1;
}
