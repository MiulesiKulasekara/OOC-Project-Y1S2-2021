#include "User.h"
#include "Driver.h"
#include <iostream>
#include <string.h>
using namespace std ;

Driver::Driver ()
{
    cout << "Driver constructor is activated" << endl ;
} 
void Driver::setDriverDetails( const char pName[] , const char pDid[] , const char pEmail[] ,const char pPassword[] , const char pAddress[] , const char pPhone[] , int pAge , const char pGender[] )
{
      strcpy ( name , pName );
      strcpy ( dId , pDid );
      strcpy ( email , pEmail);
      strcpy ( password , pPassword );
      strcpy ( address , pAddress );
      age = pAge;
      strcpy ( phone  , pPhone );
      strcpy ( gender, pGender);

}
 void Driver::driverRegister()
 {
      cout << "-------Driver Registration-------" << endl ;

      cout << "Name         : " ;
      cin >> name ;
      cout << "Driver ID    : " ;
      cin >> dId ;
      cout << "Email        : " ;
      cin >> email ;
      cout << "Password     : " ;
      cin >> password ;
      cout << "Address     : " ;
      cin >> address ;
      cout << "Age          : " ;
      cin >> age ;
      cout << "Phone number : " ;
      cin >> phone ;
      cout << "Gender       : " ;
      cin >> gender ;
 }
void Driver::logindetails(  )
{
      cout << "-------Driver Login-------" << endl ;

      cout << "Driver ID    : " ;
      cin >> dId ;
      cout << "Email        : " ;
      cin >> email ;
      cout << "Password     : " ;
      cin >> password ;

}
void Driver::displayDriverDetails()
{     
     cout << "-------Display Driver Details-------" << endl ;

      cout << "Name         : " << name << endl ;
      cout << "Driver ID    : " << dId << endl ;
      cout << "Email        : " << email << endl ;
      cout << "Password     : " << password << endl ;
      cout << "Age          : " << age << endl ;
      cout << "Phone number : " << phone << endl ;
      cout << "Gender       : " << gender << endl ;
}
void Driver::updateDriverDetails()
{   
      cout << "-------Update Details-------" << endl ;

      cout << "Name         : " ;
      cin >> name ;
      cout << "Driver ID    : " ;
      cin >> dId ;
      cout << "Email        : " ;
      cin >> email ;
      cout << "Password     : " ;
      cin >> password ;
      cout << "Age          : " ;
      cin >> age ;
      cout << "Phone number : " ;
      cin >> phone ;
      cout << "Gender       : " ;
      cin >> gender ;

      cout << endl;

     cout << "Your details are updated"  << endl ; 

}