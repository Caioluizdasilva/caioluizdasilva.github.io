#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
using namespace std;

intnumberletter (char string[])
{
	int numCarac= 0; 
	
	while(string[numCarac]!= '\0')
	{
		++numCarac;
		
	}
	return numCarac;
}

 main(void)
 {
	int numberletter(char string[]);
	char usustring[20];
	
	cout<< "Digite uma palavra: \n";
	cin>> usustring;
	
	int n=numberletter(usustring);
	cout<<"o texto "<<usustring<<" possui "<<n<<" caracteres";
	return 0;
	
	
	int Matrizquadrada( int p1, int p2, int p3, int p4)
	{
		if(p3 != p1 || p4 != p2 ) && p4 >= 0 && P3>= O && P4 < 8 && ((p3 - p4 == p1- p2) || (p3 + p4 == p1 + p2))
		{
			return  numberletter;
			
		}
		else {
			return 0;
		}
	}
	
}




