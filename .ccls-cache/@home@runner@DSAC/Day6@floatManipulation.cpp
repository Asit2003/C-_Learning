#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  double x = 12.45;
  double y = 15426.2548;
  cout<<std::setprecision(4);
  cout<<x<<" "<<y<<endl;
  cout<<std::showpoint;
  cout<<x<<" "<<y<<endl;
  cout<<std::showpos;
  cout<<x<<" "<<y<<endl;
  cout<<std::uppercase;
  cout<<y<<endl;

  return 0;
}