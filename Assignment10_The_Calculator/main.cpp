/*
//////////////////////////////////
// The Calculator Program
//////////////////////////////////

Your program will randomly generate integers between 0 and 199 and carry out  random operations (addition, subtraction, multiplication) on on these two random integers. 
The program will then ask the user for the result of the operation on the random numbers.

*/

#include <iostream>
#include <ctime>

int main() {

  std::srand(std::time(0));
  std::cout << "Welcome to the greatest calculator in the WORLD!" << std::endl;
  bool end = false;
  while(!end){
    int num1 = std::rand() % 200;
    int num2 = std::rand() % 200;
    int operation = std::rand() % 3;
    int answer;
    int userInput;
    switch(operation){

      case 0:
        std::cout << "What is " << num1 << " + " << num2 << "?" << std::endl;;
        answer = num1 + num2;
        break;
      case 1:
        std::cout << "What is " << num1 << " - " << num2 << "?" << std::endl;;
        answer = num1 - num2;
        break;
      default:
        std::cout << "What is " << num1 << " * " << num2 << "?" << std::endl;;
        answer = num1 * num2;
        break;
    }
    std::cin >> userInput;
    if(userInput == answer){
      std::cout << "Congratulation! You got the result " << answer << " right." << std::endl;     
    }
    else{
      std::cout << "Naah! The correct result is " << answer << std::endl;
    }
    std::cout << "Do you want to try again? (Y | N ) : " << std::endl;
    char go_on;
    std::cin >> go_on;

    end = ((go_on == 'Y') || (go_on == 'y')) ? false : true;   
  }
  return 0;           
}