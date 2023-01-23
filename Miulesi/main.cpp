#include "User.h"
#include "Guest.h"
#include "Report.h"
#include "Customer.h"
#include "Driver.h"
#include "Feedback.h"
#include "Payment.h"
#include "Vehicle.h"
#include "Reservation.h"
#include <iostream>
using namespace std ;

int main() {
  
      Report *vr1;
      Vehicle *v1;

      v1= new Vehicle();
      vr1= new Report();

      v1 -> setVehicleDetails("VID001", "CAR", "PETROL", "1000CC", 120.00);
      cout<<"-------------Vehicle Details-------------"<<endl;
      cout<<endl;
      v1-> displayVehicleDetails();
      cout<<endl;
      cout<<"-------------Vehicle Report-------------"<<endl;
      cout<<endl;
      v1-> displayVehicleReportDeatails("RID001","10/14/2021"); 

    //====================================================
    
    //Guest
    Guest g1;
    
    //Gest registration
    g1.guestRegister();

    cout << endl;
    
    //Display guest details
    g1.displayGuestDetails();

    cout << endl;

    //====================================================
    
    //Customer

    //Customer c1;
  
    Customer c1( "Kamal" , "DID1234567" ,"kamal@gmail.com" , "1234" , "Kandy" , "0773318219" , 34 , "Male" ) ;
   
   //display customer details
    c1.displayCustomerDetails();

    cout << endl;

    //Customer login 
    c1.setLoginDetails( );

    cout << endl;
    
    //Customer is going to update details
    c1.updateCustomer();

    cout << endl;
    
    //display updated details
    cout << "*******Updated details*******" << endl;
    c1.displayCustomerDetails();

    cout << endl;

    //Display customer details
    c1.displayCustomerReportDetails();

    //Delete customer
    //c1.~Customer();
  
  //======================================================

   Driver d1;

   cout << endl ;

  //Register to the system
  d1.driverRegister();

  cout << endl ;

  //Display d1 driver details
  d1.displayDriverDetails();

  cout << endl ;

  //Login to the system
  d1.logindetails( );
  
  cout << endl ;
  
  //driver is going to update phone number and password
  d1.updateDriverDetails();

  cout << endl ;

  cout << "*******Updated details*******" << endl;

  //display updated details
  d1.displayDriverDetails(); 
     
  delete v1;
  
  
  return 0;
}