#include <stdio.h>
#include <iostream>
#include <ctime>
using namespace std;
 
int comparaDatas (int d, int m, int a, int d1, int m1, int a1)
{ 
    if ( a < a1)
    {  
      return -1;
    }
    else if (a1 == a) 
	{
		if (m < m1 )
		{
		 return -1;
		}
		else if (m == m1)
		{
		     if ( d < d1)
		    {
		      return -1;	
		    }
		    else if (d == d1)
		    {
		    	return 0;
			}
			else 
			{
				return 1;
			}
		} 
		else
		return 1;
    }
    else
    return 1;
}


int idade (int dn, int mn, int an, int da, int ma, int aa)
{ 
   int v;
   v = comparaDatas(dn, mn, an, da, ma, aa);
   {
   	if (v == 1)
   	{
   		return -1;
	}
   
    else if (ma > mn || ma == mn && da >= dn )
       { 
         return aa - an;
	   }
    }
   return aa - an - 1;
}

int main ()
{
    int dn, mn, an, da, ma, aa;
    time_t t = time(0);
    tm* agora = localtime (&t);
    aa = agora->tm_year + 1900;
    ma = agora->tm_mon + 1;
    da+ = agora->tm_mday;
    cout << "PRIMEIRA DATA" << "\t\t " << "SEGUNDA DATA" << "\t\t" << "COMPARACAO" << "\t" << "IDADE\n"; 
    for (aa = )    
    
    
    
    
    
    
    
    
}



