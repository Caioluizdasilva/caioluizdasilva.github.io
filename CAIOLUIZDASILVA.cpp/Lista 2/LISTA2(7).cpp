#include <iostream>
using namespace std;

int vogal ( char a)
{ 
 if( a == 'a' || a == 'e' ||a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E'|| a ==  'I' || a == 'O'|| a == 'U')
 {
   return 1;
 }
 return 0;
}

int algarismo( char a)
{
	if (a <= '9'  && a >= '0')
	{
		return 1;
	}
	
	return 0; 	
}

int letraminuscula (char a)
{
	if ( a >= 97 && a <= 122 )
	{
		return 1;
	}
	
	return 0;
}

int letramaiuscula (char a)
{
	if ( a >= 65 && a <= 90 )
	{
		return 1;
	}
	
	return 0;
}
int letra (char a)
{
	if ( a >= 65 && a <= 90 || a >= 97 && a <= 122  )
	{
		return 1;
	}
	
	return 0;
}

int consoante (char a)
{
	if (vogal (a) == 0 && letra(a) == 1)
	{
		return 1;
	}
	return 0;
}
 
 int par ( char a)
 {
 	if ( a == '0' || a == '2' || a == '4' || a == '6' || a =='8')
 	{
 		return 1;
	 }
 
    return 0; 
 }
 
 main()
 {
 	char a = 'A'; 
 	
 	if ( letra(a) == 1)
 	{
 	cout<< "Essa letra eh: "<<"\n";
     
	if (vogal(a) == 1)
 	{
 	cout<< "uma vogal \n";
 		
	}
	else if (consoante(a) == 1)
	{
		cout<< "uma consoante \n";
	}
	if (letraminuscula(a) == 1)
	{
		cout << " minuscula \n";
	}
	else if (letramaiuscula(a) == 1)
	{
		cout<< "maiuscula \n";
	}
	 
   }
	 	
	else if (algarismo(a) == 1)
 	{
 		cout<< "Esse algarismo eh \n";
 	
 	if (par(a) == 1)
 	{
 		cout<< "par \n";
	}
	else 
	cout<<" Impar \n";
	 }
	 
	else 
	cout<< "Eh um caractere especial ";
	
	 

	 
	 
	 
	 
	 
	 
	 

	 	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
 }
 
