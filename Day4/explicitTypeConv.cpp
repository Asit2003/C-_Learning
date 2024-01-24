// // Normal syntax
// #include <iostream>
// using namespace std;

// int main() {
//   int a = 5;
//   int b = 2;
//   double c = a / b;
//   cout << c << endl;
//   return 0;
// }

// // c -style

// #include <iostream>
// using namespace std;

// int main()
// {
//   int a=5;
//   int b = 2;
//   double c = double(a)/b;
//   cout<<c<<endl;
//   return 0;
// }

// // c++ -style

#include <iostream>
using namespace std;

int main() {
  int a = 5;
  int b = 2;
  double c = static_cast<double>(a) / b;
  cout << c << endl;
  return 0;
}