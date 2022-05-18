#include"Food.h"
class Order
{
private:
  int orderNo;
  int orderQty;
  double amount;
  double total;
public:
  Order();
  Order(int oNo, int qty);
  double calcBill();
  void displayBill(Food* p);
  ~Order();
};
