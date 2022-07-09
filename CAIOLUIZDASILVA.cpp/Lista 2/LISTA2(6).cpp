#include <iostream>
#include <math.h>
using namespace std;

float distanciaPontos(float xa,float ya,float xb, float yb)
{
	return(sqrt(pow(xa-xb,2)+pow(ya-yb,2))); /* O Pow serve para elevar um número a pontencia e SQRT para fazer a raiz quadrada de um número.(*/
}
 main()
{
	cout<< "A distancia entre os dois pontos eh: "<< distanciaPontos( 4, 6, 8, 9);
}

