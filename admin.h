class Admin
{
private:
    int adminId;
    char addName[2];
    
public:
  Admin();
  Admin(int adId,char adName[]);
  int setid(int adId);
  char setaddName(char adname[]);
  void displayDetails();
  ~Admin();
};
