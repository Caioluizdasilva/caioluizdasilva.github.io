/* sqrt*/
#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

void equacao ( float a, float &b, float &c)
{
	float d, x1, x2;
	d= (b * b) - (4 * a * c);
    c= ((-1 * b) - sqrt (d) ) / (2 * a);
    b= ((-1 * b) + sqrt (d) ) / (2 * a);

   	
}
main ()
{
  float a, b, c;
  a= 1;
  b= 4;
  c= 3;
  equacao(a, b, c);
  cout<<  "x1= "<< c<< "\n";
  cout<< "x2= "<< b<< "\n";
}
