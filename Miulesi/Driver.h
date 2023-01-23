//Child class
//#include "User.h"

//Driver class

class Driver : public User{

  private :
   
    char dId[10];

  public :
    
     Driver ();
     void setDriverDetails( const char pName[] , const char pDid[] , const char pEmail[] ,const char pPassword[] , const char pAddress[] , const char pPhone[] , int pAge , const char pGender[] );
     void driverRegister();
     void logindetails( );
     void displayDriverDetails();
     void updateDriverDetails();
  
}; 