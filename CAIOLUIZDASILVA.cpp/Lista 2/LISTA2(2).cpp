/* Escreva um módulo para converter uma temperatura da escala Celsius para a escala  Fahrenheit. 
A  fórmula  de  conversão  é 1.8 * c+ 32 =F,  onde  F  é  a temperatura em Fahrenheit e C é a temperatura em Celcius.
Seu módulo deve retornar o  valor  da  temperatura  em  Fahrenheit. 
Em  seguida, chame este módulo a partir de um módulo main para testar seu programa
*/

#include <iostream>
#include <math.h>
using namespace std;

float celciusFahrenheit( float c)
{
	return (1.8 * c)+ 32;
}
main()
{
	cout<< "A temperatura em Fahrenheit eh: "<< celciusFahrenheit (23)<< "F";
}
