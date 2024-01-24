#include <iostream>
using namespace std;

// const double PI = 3.14;
#define PI 3.14
int main()
{
 
  int r;
  cout << "Enter the radius of the circle: ";
  cin >> r;
  cout << "The area of the circle is: " << PI * r * r<<endl;
  return 0;
}