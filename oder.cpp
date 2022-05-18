
#inculde"Order.h"
#include<iostream>
using namespace std;
#include<cstring>Order::Order()
{
orderNo=0;
orderQty=0;
amount=0;
total=0;
}Order::Order(int oNo, int qty);
{
orderNo = oNo;
orderQty = qty;
}void Order::calcBill()
{}
void Order::displayBill()
{}
//DestructorOrder::~Order()
{
}

