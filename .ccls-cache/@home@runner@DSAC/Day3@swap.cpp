#include <iostream>
using namespace std;

int main()
{
  int a = 10, b=20;
  cout << "Before swap: " << a << " " << b << endl;

  int temp = a;
  temp = a;
  a=b;
  b=temp;
  cout<< "After swap: " << a << " " << b << endl;
  return 0;
  
}