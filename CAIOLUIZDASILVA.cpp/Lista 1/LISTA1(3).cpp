 /* 
Caio Luiz da Silva, 18/11/2021;
3.Escreva  um  m�dulo  para  receber  o primeiro nome  de  uma  pessoa  em  seu primeiro par�metro. 
Este m�dulo possui ainda um segundo par�metro que deve receber o sobrenome   desta   mesma   pessoa. 
Como   resultado   de   seu processamento,  este  m�dulo  deve  imprimir  um  texto  no seguinte  
formato: sobrenome,  seguido  de  uma  v�rgula,  seguido  do  nome. Em  seguida, chamenmeste m�dulo a partir de um m�dulo 
main para testar seu programa. Escreva um coment�rio logo no in�cio do arquivo abordandoo seu nome e a data de quando o programa foi criado.
*/


#include <iostream>
using namespace std;

void nomeSobrenome (string sobrenome, string nome)
{
	cout<<sobrenome<<", "<< nome<< "\n";	
}
main()
{
	nomeSobrenome(" SILVA","CAIO");
}
