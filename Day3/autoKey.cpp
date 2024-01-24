#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
  auto x=2;
  auto y=3.5;
  auto z=x+y;
  cout<<x<<"\n"<<y<<"\n"<<z<<"\n";
  cout<<typeid(x).name()<<endl;
  cout<<typeid(y).name()<<endl;
  cout<<typeid(z).name()<<endl;
  return 0;
}