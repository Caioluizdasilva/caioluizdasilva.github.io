#include <iostream>
using namespace std;

main()
{
	int v[5], v1[5], v2[5];
	int i;
	for (i= 0; i < 5; i = i +  1)
	{
			cout<< "Forneca o elemento da posicao "<< i << " do vetor ";
			cin >> v[i];
		    cout<< "Forneca o elemento da posicao "<< i << " do 2 vetor ";
			cin >> v1[i];
	}
	for (i = 0; i < 5; i = i + 1) 
	{
		v2[i]= v[i]+ v1[i];
	    cout<< v2[i]<< "\n";
	}

	 	
}
