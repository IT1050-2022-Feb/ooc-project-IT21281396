#include "RegisteredUser.h"
#include <cstring>

UnregisteredUser::UnregisteredUser()
{
  int ID=0;
  strcpy( Name, "");
  strcpy(Address, "");
  strcpy( Email, "");
  strcpy( phoneNumber, "");
  
}
UnregisteredUser(int pcustid,  char pname[],  char paddress[],  char pemail[] ,char pnumber [])
{
  ID=pcustid
  strcpy( Name, pname[]);
  strcpy(Address, paddress[] );
  strcpy( Email,  pemail[] );
  strcpy( phoneNumber, pnumber []);
}

void UnregisteredUser:: setID(int pcustid)
{
  
}
void UnregisteredUser::setname(char pname[])
{
  
}
void UnregisteredUser::setaddress(char paddress[])
{
  
}
void UnregisteredUser::setemail(char pemail[] )
{
  
}
void UnregisteredUser::setpno(char pnumber [])
{
  
}
void UnregisteredUser::displayDetails()
{
  
}
UnregisteredUser::~UnregisteredUser()
{
  
}
