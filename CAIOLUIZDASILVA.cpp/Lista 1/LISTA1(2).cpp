
/*
 Uma empresa necessita cadastrar seus funcion�rios, considerando o seguinte: a)  o  nome  do  funcion�rio;  b)  sua  data  de  nascimento
 (divida  a  data  de nascimento em tr�s dados individuais: dia, m�s e ano); 
 c) seu sal�rio;e d) uma informa��o que indicase o funcion�rio � chefe dentro da empresa(�S� para sim; �N� para n�o). 
 Escreva um m�dulo exclusivamentepara receber estes dados e escrever uma  frase  na  tela que  contemple estes  dados.
 Em  seguida, chame este m�dulo a partir de um m�dulo main para testar seu programa.
 */
 /* Para numeros interiro= int; numero real= float; para texto = string; para caracter=char, para true false = bool; 
   Quando vc declara o tipo da variavel n�o deve se reptir o tipo dela.
 
 
 
 */
 #include <iostream>
 using namespace std;
 
 void cadastroFuncionario (string nome, int dia, int mes, int ano, float salario, char chefe) 
 {
 	cout<< "O nome do funcionario eh: "<< nome<<"\n"
 	<< "A data de nascimento eh: "<< dia<< "/"<< mes<< "/"<< ano<<"\n"
 	<< " O salario do funcionario eh: "<<salario<<"\n"
 	<< " Ele e chefe na empresa: "<< chefe<<"\n";
 	
 }
 main()
 {
 	cadastroFuncionario("CAIO", 04, 05, 2006, 9000.50, 'S');
 }
 
