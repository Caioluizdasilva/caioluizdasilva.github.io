#include <iostream>
using namespace std;

float grauRadiano (float G)
{
	return (3.141592 * G) / 180 ;
}
main()
{
	cout<< " O angulo em radiano eh: "<< grauRadiano (12);
}
