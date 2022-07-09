/* Uma equaçãodo  segundo  grau possui  a  forma Ax2+  Bx  +  C  =  0.  Crie  um módulo para receber 
os valores deA, B e C e retornar o valor de delta (?= B2–4AC). Em seguida, chame este módulo a partir 
de um módulo main para testar seu programa.
*/
#include <iostream>
#include <math.h>
using namespace std;

float returnDelta ( float a, float b, float c)
{
	return  (b * b) - (4 * a * c);
	
}

main()
{

	cout<< "O valor de Delta eh:  "<< returnDelta ( 9, 6.6, 12)<< "\n";
}
