#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;



/* 1)_Nos Estados Unidos, a unidade padr�o de medida de peso � a libra. Uma libra equivale a 453 GRAMAS. 
Escreva uma fun��o para receber um peso em libras e retornar o peso equivalente em QUILOS. */

float libra_quilos (float p)
{
    float q;
    q= 0.453 * p;
    return q;
    
}

/* 
2)_ (2,0 pontos) Nos Estados Unidos, a unidade padr�o de medida de comprimento � o p�. Um p� equivale a 30,48 
CENT�METROS. Escreva uma fun��o para receber uma altura em p�s e retornar o comprimento equivalente em METROS. */

float pes_metros (float p)
{
	float m;
	m= 0.3048 * p;
	return m;
}

/* 3) (3,0 pontos) Escreva uma fun��o para receber o peso (em libras) e a altura (em p�s) de uma pessoa. Esta fun��o precisa 
chamar as fun��es das quest�es anteriores para:
a. Converter um peso de libras para quilos e fornecer esse valor como uma das respostas da fun��o;
b. Converter uma altura de p�s para metros e tamb�m fornecer esse valor como uma das respostas da fun��o.
Em seguida, de posse dos valores do peso (em quilos) e da altura (em metros), sua fun��o deve calcular e retornar o valor do 
IMC, usando a seguinte express�o: IMC= peso\ altura� . */
 
 float IMC (float l, float a)
 {
 	 float q, m;
 	 q= libra_quilos (l);
 	 m= pes_metros(a);
 	 return q /(m * m); 
     
}
/* 4) (3,0 pontos) Escreva a fun��o principal do seu programa, a fun��o main. Esta fun��o deve pedir ao usu�rio o seu peso 
em libras e a sua altura em p�s para imprimir na tela, o seguinte:
- o peso em quilos dessa pessoa;
- a altura em metros dessa pessoa;
- o valor do IMC desta pessoa. 
Lembre-se que a fun��o da quest�o anterior realiza o c�lculo desse IMC e tamb�m fornece os valores de peso, convertido de 
libras para quilos, e de altura, convertida de p�s para metros. Chame esta fun��o para obter o efeito desejado.
Veja, abaixo, uma imagem com um exemplo da execu��o desse programa:
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
