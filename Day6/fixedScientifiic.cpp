#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  double x = 4582.26514, y = 45215.87, z = 1.4e7;
  cout << std::fixed;
  cout << x << " " << y << " " << z << endl;
  cout << std::setprecision(2);
  cout << x << " " << y << " " << z << endl;
  cout << ".............................***............................"
       << endl;
  cout << std::scientific;
  cout << x << " " << y << " " << z << endl;
  cout << std::setprecision(2);
  cout << x << " " << y << " " << z << endl;
}