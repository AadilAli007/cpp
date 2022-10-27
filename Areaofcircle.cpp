#include<iostream>
using namespace std;

inline float Area(float radius)
{
    return 3.1415 * radius * radius;
}
int main()
{
  float radius;
  cout<<"Enter Radius of circle=";
  cin>>radius;
  cout<<"Area of circle : "<<Area(radius);

  cout<<endl;
    system("pause");
  return 0;
}
