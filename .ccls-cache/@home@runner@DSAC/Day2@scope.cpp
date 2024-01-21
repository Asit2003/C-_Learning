#include <iostream>
using namespace std;
int x = 50;
int main() {
  int x = 10;
  {
    int x = 20;
    cout << x << endl;
  }
  return 0;
}
/* here we have 3 scopes inner (1st) scope where x value is 20, 2nd scope, where
 * x value is 10 and outer(3rd) scope where x value is 50  */
