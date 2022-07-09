 /* 
Caio Luiz da Silva, 18/11/2021;
3.Escreva  um  módulo  para  receber  o primeiro nome  de  uma  pessoa  em  seu primeiro parâmetro. 
Este módulo possui ainda um segundo parâmetro que deve receber o sobrenome   desta   mesma   pessoa. 
Como   resultado   de   seu processamento,  este  módulo  deve  imprimir  um  texto  no seguinte  
formato: sobrenome,  seguido  de  uma  vírgula,  seguido  do  nome. Em  seguida, chamenmeste módulo a partir de um módulo 
main para testar seu programa. Escreva um comentário logo no início do arquivo abordandoo seu nome e a data de quando o programa foi criado.
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
