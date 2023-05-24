// visit.cpp
// Name: Angel Fuentes

#include <iostream>
using namespace std;

int main() {
  int age;
  cout << "How old are you?" << endl;
  cin >> age;

  switch (age % 7) {
    case 0:
      cout << "Come on Sunday!" << endl;
      break;
    case 1:
      cout << "Come on Monday!" << endl;
      break;
    case 2:
      cout << "Come on Tuesday!" << endl;
      break;
    case 3:
      cout << "Come on Wednesday!" << endl;
      break;
    case 4:
      cout << "Come on Thursday!" << endl;
      break;
    case 5: 
      cout << "Come on Friday!" << endl;
      break;
    case 6: 
      cout << "Come on Saturday!" << endl;
      break;
    default:
      cout << "Don't come..." << endl; 
  }

  return 0;
}
