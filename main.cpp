#include <iostream>
#include <iomanip>
#include <string>
#include "BookingSystem.h"
using namespace std;


int main (){



BookingSystem bookingSystemC("computer store", 6, 3); for(int 
i=0;i<20;i++) {
bookingSystemC.RentWindowsLaptop(); 
bookingSystemC.RentMacBook();
}
bookingSystemC.ReturnWindowsLaptop(); 
bookingSystemC.ReturnMacBook(); bookingSystemC.PrintReport();





  return 0;
}