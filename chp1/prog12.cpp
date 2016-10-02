#include <iostream>
using namespace std;
#include <math.h>
using namespace std;

int main()
{
  double radius = 2;
  double area = 0;
  double width = radius/10000;
  double height;
  double x;
  for (int i = 0; i < 10000; i++)
  {
    x = (width * (i+1)) - (width/2);
    height = sqrt (radius * radius - x*x);
    area = area + (height * width);
  }
  cout << "The area is : " << area << endl;
  return 0;
}
    
