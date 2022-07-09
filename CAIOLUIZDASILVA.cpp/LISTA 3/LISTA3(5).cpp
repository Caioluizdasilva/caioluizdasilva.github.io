#include <iostream>
using namespace std;

void piscina (float c, float &l, float &p)
{
	float v, a;
	v= p * c * l;
	a= c * l;
	l= a;
	p= v;
}

main ()
{
	float c, l, p;
	c= 2;
	l= 2;
	p= 4;
	piscina(c, l, p);
	cout<< "O  volume de agua armazenado pela piscina eh: "<< p << "\n";
	cout << "a area de piso a ser substituido eh: " << l << "\n";
}
