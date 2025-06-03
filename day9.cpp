#include <iostream>
using namespace std;

int main() {

  char op;
  int a = 42, b = 6;


  // choose the operator
  cout << "Enter an operator (+, -, *, /): ";
  cin >> op;

  switch (op) {
  case '+':
    cout << "Result = "<< (a + b);
    break;
  case '-':
    cout << "Result = " << (a - b);
    break;
  case '*':
    cout << "Result = " << (a * b);
    break;
  case '/':
    cout << "Result = " << (a / b);
    break;
  default:
    cout << "Invalid Operator";
  }

  return 0;
}