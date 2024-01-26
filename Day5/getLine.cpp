#include <iostream>
using namespace std;

int main() {
  string name;
  cout << "Enter Your Full Name: ";
  getline(cin, name);
  cout << "Welcome " << name;
  return 0;
}