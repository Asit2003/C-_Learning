// #include <iostream>
// using namespace std;

// int main() {
//   int a = 30, b = 78;
//   bool c = true;
//   cout << c << '\n';
//   cout << std::boolalpha;
//   cout << c << '\n';
//   cout << noboolalpha;
//   cout << c << '\n';

//   cout << "The value of a is " << a << " and the value of b is " << b << '\n';
//   cout << std::hex;
//   cout << "The value of a is " << a << " and the value of b is " << b << '\n';
//   cout << std::oct;
//   cout << "The value of a is " << a << " and the value of b is " << b << '\n';
//   cout << std::dec;
//   cout << "The value of a is " << a << " and the value of b is " << b << '\n';

//   cout << std::showbase;
//   cout << "The value of a is " << a << " and the value of b is " << b << '\n';
//   cout << std::showpos;
//   cout << "The value of a is " << a << " and the value of b is " << b << '\n';
//   cout << std::uppercase;
//   cout << "The value of a is " << a << " and the value of b is " << b << '\n';

//   cout << std ::setw(8);
//   cout << std ::setfill('*');
//   cout << a << '\n';

//   return 0;
// }
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int a = 30, b = 78;
  bool c = true;

  // Output boolean value with and without boolalpha
  cout << c << '\n';
  cout << std::boolalpha;
  cout << c << '\n';
  cout << noboolalpha;
  cout << c << '\n';

  // Output integer values in decimal, hex, and octal formats
  cout << "The value of a is " << a << " and the value of b is " << b << '\n';
  cout << std::hex;
  cout << "The value of a is " << a << " and the value of b is " << b << '\n';
  cout << std::oct;
  cout << "The value of a is " << a << " and the value of b is " << b << '\n';
  cout << std::dec;
  cout << "The value of a is " << a << " and the value of b is " << b << '\n';

  // Output integer values with various flags
  cout << std::showbase;
  cout << "The value of a is " << a << " and the value of b is " << b << '\n';
  cout << std::showpos;
  cout << "The value of a is " << a << " and the value of b is " << b << '\n';
  cout << std::uppercase;
  cout << "The value of a is " << a << " and the value of b is " << b << '\n';
  cout<< nouppercase;
  cout<< noshowpos;

  // Output with width and fill
  cout << std::setw(8);
  cout << std::setfill('*');
  cout << a << '\n';

  return 0;
}
