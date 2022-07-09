#include <iostream>
#include <stdio.h>
using namespace std;
int respostaParanumero (int a)
{
	if (a < 1000000)
		return 1;
	else if (a < 0)
	    return -1 ;
    else
    	return 0;
}

main(){
    
    int n,b,c;
    string s;
    cout<<"Forneca um numero inferior a 1000000 (um milhao): ";
    cin>>n;
    if(n==0){
        cout<<"Valor invalido";
    }
    if(respostaParanumero(n) == 0)
    {
        cout<<"NUMERO FORNECIDO EXTRAPOLA O VALOR PEDIDO";
    }
    else if(respostaParanumero(n) == -1){
        cout<<"NUMERO FORNECIDO NAO E NATURAL";
    }else{
    
    cout<<n%10<<" "<<"Unidades\n";
    n/=10;
    cout<<n%10<<" "<<"Dezenas\n";
    n/=10;
    cout<<n%10<<" "<<"Centenas\n";
    n/=10;
    cout<<n%10<<" "<<"Unidades de milhar\n";
    n/=10;
    cout<<n%10<<" "<<"Dezenas de milhar\n";
    n/=10;
    cout<<n%10<<" "<<"Centenas de milhar\n";
    }
}

