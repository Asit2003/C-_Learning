#include <iostream>
using namespace std;
int main()
{
  int x = 10;
  double y = 5.5;
  cout<<"int size: "<<sizeof(int)<<endl;
  cout<<"char size: "<<sizeof(char)<<endl;
  cout<<"float size: "<<sizeof(float)<<endl;
  cout<<"double size: "<<sizeof(double)<<endl;
  cout<<"bool size: "<<sizeof(bool)<<endl;  
  cout<<"long size: "<<sizeof(long)<<endl;
  cout<<"short size: "<<sizeof(short)<<endl;
  cout<<"long long size: "<<sizeof(long long)<<endl;
  cout<<"unsigned int size: "<<sizeof(unsigned int)<<endl;
  cout<<sizeof(x++)<<endl;
  cout<<sizeof(y)<<endl;
  cout<<sizeof(10ll)<<endl;
  cout<<sizeof(10.5)<<endl;
  return 0;
}