/* O volume de uma esfera � dado pela seguinte express�o: V= 4/3 * 3,141592 * r.r.r ,
onde V  �  o  volume  e  R  �  o  raio  da  esfera. Crie  um  m�dulo  para  receber  o  raio  da esfera e retornaro seu volume. 
Use a constante 3,141592 para o valor de pi. 
Em  seguida, chame este  m�dulo a  partir  de um  m�dulo main para  testar  seu programa.
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
