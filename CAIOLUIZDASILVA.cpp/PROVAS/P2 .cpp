#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;



/* 1)_Nos Estados Unidos, a unidade padrão de medida de peso é a libra. Uma libra equivale a 453 GRAMAS. 
Escreva uma função para receber um peso em libras e retornar o peso equivalente em QUILOS. */

float libra_quilos (float p)
{
    float q;
    q= 0.453 * p;
    return q;
    
}

/* 
2)_ (2,0 pontos) Nos Estados Unidos, a unidade padrão de medida de comprimento é o pé. Um pé equivale a 30,48 
CENTÍMETROS. Escreva uma função para receber uma altura em pés e retornar o comprimento equivalente em METROS. */

float pes_metros (float p)
{
	float m;
	m= 0.3048 * p;
	return m;
}

/* 3) (3,0 pontos) Escreva uma função para receber o peso (em libras) e a altura (em pés) de uma pessoa. Esta função precisa 
chamar as funções das questões anteriores para:
a. Converter um peso de libras para quilos e fornecer esse valor como uma das respostas da função;
b. Converter uma altura de pés para metros e também fornecer esse valor como uma das respostas da função.
Em seguida, de posse dos valores do peso (em quilos) e da altura (em metros), sua função deve calcular e retornar o valor do 
IMC, usando a seguinte expressão: IMC= peso\ altura² . */
 
 float IMC (float l, float a)
 {
 	 float q, m;
 	 q= libra_quilos (l);
 	 m= pes_metros(a);
 	 return q /(m * m); 
     
}
/* 4) (3,0 pontos) Escreva a função principal do seu programa, a função main. Esta função deve pedir ao usuário o seu peso 
em libras e a sua altura em pés para imprimir na tela, o seguinte:
- o peso em quilos dessa pessoa;
- a altura em metros dessa pessoa;
- o valor do IMC desta pessoa. 
Lembre-se que a função da questão anterior realiza o cálculo desse IMC e também fornece os valores de peso, convertido de 
libras para quilos, e de altura, convertida de pés para metros. Chame esta função para obter o efeito desejado.
Veja, abaixo, uma imagem com um exemplo da execução desse programa:
*/

 main() 
 {
 	float l, p, I, peso, altura;
 	cout<< "Digite o seu peso em Libras: " ;
 	cin>> l;
 	cout<< "Digite a sua altura em pes: ";
 	cin>> p;
 	I= IMC (l, p);
 	peso= libra_quilos(l);
 	altura= pes_metros(p);
 	cout<< "Sua altura em metros: " << altura; 
 	cout<< " \n Seu peso em quilos:" << peso;
 	cout<< "\n Seu IMC: "<< I;
 	
}
