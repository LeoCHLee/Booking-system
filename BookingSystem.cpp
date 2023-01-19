#include <iostream>
#include <iomanip>
#include <string>
#include "BookingSystem.h"
using namespace std;

BookingSystem :: BookingSystem () { 
  BookingSystem :: name = "Trinity Laptop Bookings";
  BookingSystem :: totalWindowsLaptops = 20;
  BookingSystem :: totalMacBooks = 20;
  BookingSystem :: availableWindowsLaptops = totalWindowsLaptops;
  BookingSystem :: availableMacBooks = totalMacBooks;
  }

BookingSystem :: BookingSystem(string name, int totalWindowsLaptops, int totalMacBooks){

  if (name.size() > 64)
  name.resize(64);
  
  BookingSystem :: name = name;

  if (totalWindowsLaptops <= 0) {
    BookingSystem :: totalWindowsLaptops = 0;
    BookingSystem :: availableWindowsLaptops = 0;
    }
  else {
    BookingSystem :: totalWindowsLaptops = totalWindowsLaptops;
    BookingSystem :: availableWindowsLaptops = totalWindowsLaptops;
    }
      
  if (totalMacBooks <= 0) {
    BookingSystem :: totalMacBooks = 0;
    BookingSystem :: availableMacBooks = 0;

    }
  else {
    BookingSystem :: totalMacBooks = totalMacBooks;
    BookingSystem :: availableMacBooks = totalMacBooks;
    }
  }
    bool BookingSystem :: RentWindowsLaptop(){
      if (availableWindowsLaptops > 0) {
        availableWindowsLaptops --;
        return true;
      }
      else
        return false;
    }
  
  bool BookingSystem :: RentMacBook() {
      if (availableMacBooks > 0) {
        availableMacBooks --;
        return true;
      }
        else
          return false;
    }
  
  void BookingSystem :: ReturnWindowsLaptop() {
  if( availableWindowsLaptops < totalWindowsLaptops)
    availableWindowsLaptops ++;
    }
  

  void BookingSystem :: ReturnMacBook () {
  if( availableMacBooks < totalMacBooks)
    availableMacBooks ++;
    }
  
  string BookingSystem :: getName() {
    return name;
    }
  unsigned int BookingSystem :: getTotalWindowsLaptops(){
    return totalWindowsLaptops;
    }
  
  unsigned int BookingSystem :: getTotalMacBooks(){
    return totalMacBooks;
    }
  
  unsigned int BookingSystem :: getAvailableWindowsLaptops(){
    return availableWindowsLaptops;
    }
  
  unsigned int BookingSystem :: getAvailableMacBooks(){
    return availableMacBooks;
    }

   unsigned int BookingSystem :: getAvailableLaptops(){
    return getAvailableWindowsLaptops() + getAvailableMacBooks();
     }
  
  unsigned int BookingSystem :: getRentedWindowsLaptops(){
    return getTotalWindowsLaptops() - getAvailableWindowsLaptops();
    }
  
  unsigned int BookingSystem :: getRentedMacBooks(){
    return getTotalMacBooks() - getAvailableMacBooks();
    }
  
  unsigned int BookingSystem :: getRentedLaptops(){
    return getRentedWindowsLaptops() + getRentedMacBooks();
    }

  void BookingSystem :: addWindowsLaptops(unsigned int additionalWindowsLaptops){
    if (additionalWindowsLaptops > 0){  
      totalWindowsLaptops += additionalWindowsLaptops;
      availableWindowsLaptops += additionalWindowsLaptops;
    }  
  }

  void BookingSystem :: addMacBooks(unsigned int additionalMacBooks){
    if (additionalMacBooks > 0){  
      totalMacBooks += additionalMacBooks;
      availableMacBooks += additionalMacBooks;
    }  
  }

  void BookingSystem :: removeWindowsLaptops(unsigned int removedWindowsLaptops){
    if (removedWindowsLaptops > availableWindowsLaptops)
      removedWindowsLaptops = availableWindowsLaptops;


    totalWindowsLaptops -= removedWindowsLaptops;
    availableWindowsLaptops -= removedWindowsLaptops;
      
    }
  
  
  void BookingSystem :: removeMacBooks(unsigned int removedMacBooks){
    if (removedMacBooks > availableMacBooks)
      removedMacBooks = availableMacBooks;

    totalMacBooks -= removedMacBooks;
    availableMacBooks -= removedMacBooks;
  
  }
  
  void BookingSystem :: PrintReport(){
    cout<<"---------------------"<<endl;
  cout<<"Laptop "<<"Booking "<<"System"<<endl;
  cout<<"---------------------"<<endl;
  cout<<left<<setw(26)<<"Name"<<": "<<getName()<<endl;
  cout<<left<<setw(26)<<"Total Windows Laptops"<<": "<<getTotalWindowsLaptops()<<endl;
  cout<<left<<setw(26)<<"Total MacBooks"<<  ": "<<getTotalMacBooks()<<endl;
  cout<<left<<setw(26)<<"Rented Windows Laptops"<<": "<<getRentedWindowsLaptops()<<endl;
  cout<<left<<setw(26)<<"Rented MacBooks"<<": "<<getRentedMacBooks()<<endl;
  cout<<left<<setw(26)<<"Rented Laptops"<< ": "<<getRentedLaptops()<<endl;
  cout<<left<<setw(26)<<"Available Windows Laptops" <<": "<<getAvailableWindowsLaptops()<<endl;
  cout<<left<<setw(26)<<"Available MacBooks" <<": "<<getAvailableMacBooks()<<endl;
  cout<<left<<setw(26)<<"Available Laptops"<<": "<<getAvailableLaptops()<<endl; 
  }

