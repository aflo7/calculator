#include <iostream>

int main() {


  while (1) {
  std::cout << "Welcome to the console calculator" << std::endl;
    double firstDigit;
   char operation;
   double secondDigit;
    std::cout << "Enter first digit" << std::endl;
  std::cin >> firstDigit;
  // while (!isdigit(firstDigit)) {
  //   std::cout << "Enter valid first digit" << std::endl;

  //   std::cin >> firstDigit;

  // }
    std::cout << "Enter the operation" << std::endl;
    std::cin >> operation;

    while (operation != '+' && operation != '-' && operation != '/' && operation != '*') {
    std::cout << "Enter valid operator" << std::endl;

    std::cin >> operation;

    }
    std::cout << "Enter second digit" << std::endl;
  std::cin >> secondDigit;

  double sum;

  switch(operation)
{
case '+':
    sum = firstDigit + secondDigit;
    break;
case '-':
    sum = firstDigit - secondDigit;
    break;
case '*':
    sum = firstDigit * secondDigit;
    break;
case '/':
    sum = firstDigit / secondDigit;
    break;
}
  std::cout << "Your sum is " << sum << "." << std::endl;

  




  

  
  }

  return 0;
}