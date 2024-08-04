/*
The program makes a calendar. The user can input the year and the day of the week the calendar starts on. After that the program will print out a calendar for the year.
The output format:
Calendar of Year
--Month Year--
  Mon  Tue  Wed  Thu  Fri  Sat  Sun
                  1    2    3    4
  5    6    7    8    9    10    11
  12   13   14  15    16   17    18
  19   20   21   22   23   24    25
  26   27   28   29   30   31
  */

#include <iostream>
#include <iomanip>
#include <string>

int main() {

  //consts
  const int MONTHDAYS[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  const std::string MONTHS[] {"January", "February", "March", "April", "May", "June", "July", "Aug", "September", "October", "November", "December"};
  const int COL_WIDTH = 6;  //width of each column

  //vars
  int year;
  int day;  //day of the week the calendar starts on
  int actualMonth = 0;
  bool leapYear = false;
  
  
  std::cout << "Enter a year: " << std::endl;
  std::cin >> year;
  if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ){
    leapYear = true;
  }//end leapyear check
  std::cout << "Enter the first day of the year: " << std::endl; //inputs
  std::cin >> day;
  std::cout << "Calendar of " << year << std::endl;
  for(std::string month : MONTHS){ //prints month
    std::cout << "--" << month << " " << year << "--" << std::endl;
    std::cout<< std::setw(COL_WIDTH) << "Mon" //print days
      << std::setw(COL_WIDTH) << "Tue"
      << std::setw(COL_WIDTH) << "Wed"
      << std::setw(COL_WIDTH) << "Thu"
      << std::setw(COL_WIDTH) << "Fri"
      << std::setw(COL_WIDTH) << "Sat"
      << std::setw(COL_WIDTH) << "Sun" << std::endl;
    if(month == "February" && leapYear){
      for(int i = 1; i < day; i++){
        std::cout << std::setw(COL_WIDTH) << " ";
      }
      for(int i = 1; i <= 29; i++){
        std::cout << std::setw(COL_WIDTH) << i;
        if(day == 7){
          std::cout << std::endl;
          day = 0;
        }
        day++;
      }
      }
    else{
    for(int i = 1; i < day; i++){
      std::cout << std::setw(COL_WIDTH) << " ";
    }
    for(int i = 1; i <= MONTHDAYS[actualMonth]; i++){
      std::cout << std::setw(COL_WIDTH) << i;
      if(day == 7){
        std::cout << std::endl;
        day = 0;
      }
      day++;
    }
    }
    actualMonth++;
    std::cout << std::endl;
    std::cout << std::endl;
  }   
  return 0;
}