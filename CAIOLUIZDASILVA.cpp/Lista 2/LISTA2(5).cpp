#include <iostream>
#include <math.h>
using namespace std;

float grauRadiano (float G)
{
	return (3.141592 * G) / 180 ;
}


float trianguloAngulo(float l1, float l2, float ang )
{
	return (l1* l2 * sin ( grauRadiano (ang) ) ) / 2; /* O sin (grauRadiano( ang) ele é converosr de graus para radiano, no caso o valor que ela retorna , já o sin é a função que vai pegar o seno do angulo*/
}


main()
{
	cout<< "area do tringulo eh: "<< trianguloAngulo(3, 4, 90);
}





