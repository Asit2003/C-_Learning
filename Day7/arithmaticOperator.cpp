#include <iostream>
using namespace std;

int main() {
  int x = 10;
  int y = 5;
  float z = 10.2;
  float w = 5.2;
  cout << "x + y = " << x + y << endl;
  cout << "x - y = " << x - y << endl;
  cout << "x * y = " << x * y << endl;
  cout << "x / y = " << x / y << endl;
  cout << "x % y = " << x % y << endl;
  cout << "z + w = " << z + w << endl;
  cout << "z - w = " << z - w << endl;
  cout << "z * w = " << z * w << endl;
  cout << "z / w = " << z / w << endl;
  // cout << "z % w = " << z % w << endl; // % not works for float.
  int k = x++;
  cout << k << endl;
  cout << x << endl;
  cout << y << endl;
  int l = ++y;
  cout << l << endl;

  int m = x--;
  cout << m << endl;
  int n = --y;
  cout << n << endl;
  return 0;
}