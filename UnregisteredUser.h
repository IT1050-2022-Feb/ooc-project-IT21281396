#include "Food.h"
class UnregisteredUser
{
protected:
int ID;
char Name[20];
char Address[50];
char Email[30];
char phoneNumber[10];
public:

UnregisteredUser();
UnregisteredUser(int pcustid,  char pname[],  char paddress[],  char pemail[] ,char pnumber []);

void setID(int pcustid);
void setname(char pname[]);
void setaddress(char paddress[]);
void setemail(char pemail[] );
void setpno(char pnumber []);




 void displayDetails();
~UnregisteredUser();
};
