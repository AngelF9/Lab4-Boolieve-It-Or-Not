// calculator.cpp
// Name: Angel Fuentes

#include <iostream>
using namespace std;

int main() {
  int x, y;
  cout << "Enter an integer number x:" << endl;
  cin >> x;
  cout << "Enter an integer number y:" << endl;
  cin >> y;
  cout << "Enter the operation to do:" << endl;
  string op;
  cin >> op;

  if (op == "add") {
    cout << "x + y = " << x + y << endl;
  } else if (op == "subtract") {
    cout << "x - y = " << x - y << endl;
  } else if (op == "multiply") {
    cout << "x * y = " << x * y << endl;
  } else if (op == "divide") {
    if (y == 0) {
      cout << "Division by 0 is not allowed!" << endl;
      return 2;
    }
    cout << "x / y = " << x / y << endl;
  } else if (op == "modulus") {
    if (y == 0) {
      cout << "Modulus by 0 is not allowed!" << endl;
      return 2;
    }
    cout << "x % y = " << x % y << endl;
  } else {
    cout << "Invalid operation." << endl;
    cout << "Available operations: add, subtract, multiply, divide, modulus"
         << endl;
    return 1;
  }
}
