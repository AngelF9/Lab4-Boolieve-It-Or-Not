// odd.cpp
// Name: Angel Fuentes 

#include <iostream>
using namespace std;

int main() {
  cout << "Enter a number:" << endl;
  int n;
  cin >> n;

  if (n % 2 == 0) {
    cout << n << " is even" << endl;
  } else {
    cout << n << " is odd" << endl;
  }

  if (n > 0) {
    cout << n << " is positive" << endl;
  } else if (n < 0) {
    cout << n << " is negative" << endl;
  } else {
    cout << n << " is zero" << endl;
  }

  cout << "Goodbye!" << endl;

  return 0;
}
