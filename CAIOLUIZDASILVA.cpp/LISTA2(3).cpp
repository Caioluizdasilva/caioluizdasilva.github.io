/* O volume de uma esfera é dado pela seguinte expressão: V= 4/3 * 3,141592 * r.r.r ,
onde V  é  o  volume  e  R  é  o  raio  da  esfera. Crie  um  módulo  para  receber  o  raio  da esfera e retornaro seu volume. 
Use a constante 3,141592 para o valor de pi. 
Em  seguida, chame este  módulo a  partir  de um  módulo main para  testar  seu programa.
*/
#include <iostream>
using namespace std;

float raioVolume	(float r)
{
	return (4 * 3.141592 * r*r*r) / 3; 
}
main()
{
	cout<<"O volume da esfera eh: "<< raioVolume(12);
}
