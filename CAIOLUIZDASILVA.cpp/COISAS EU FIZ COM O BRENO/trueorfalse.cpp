#include <iostream>
#include <stdio.h>
using namespace std;

bool truefalse (int n)
{
	if ( n % 2 == 0)
	{
		return true;
	}
	else 
	{ 
	return false;
	}
}

int thebignumber ( int m, int p )
{
	if ( m > p)
	{ 
	  return m;
    } 
    else 
    {
	return p;
    }
}
 main ()
 {
   int a,b,t;
   string c, d;
   bool i, p;
   
  cout<< " Digite um numero INTEIRO: ";
  cin>> a;
  cout<< " Digite outro numero INTEIRO: ";
  cin>> b;
  
  i = truefalse(a);
  p = truefalse(b);
  t = thebignumber(a,b);
  
  if(i == true){
      c = "par";
  }else{
      c = "impar";
  }
  
  if(p == true){
      d ="par";
  }else{
      d = "impar";
  }
  
  cout<<"O numero "<<a<<" eh "<<c;
  cout<<"\nO numero "<<b<<" eh "<<d;
  cout<<"\nO maior numero eh "<<t;
}

