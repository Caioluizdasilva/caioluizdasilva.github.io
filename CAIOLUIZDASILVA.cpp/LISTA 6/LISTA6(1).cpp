#include <iostream>
using namespace std;

main()
{
	int v[5], v1[5];
	int i;
	for (i= 0; i < 5; i = i +  1)
	{
			cout<< "Forneca o elemento da posicao "<< i<< "do vetor ";
			cin >> v[i];
	}
	for (i = 0; i < 5; i = i + 1) 
	{
		v1[i] = v[i];
	    cout<< v1[i]<< "\n";
	}

	 	
}
