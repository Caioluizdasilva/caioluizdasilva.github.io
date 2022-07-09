#include <iostream>
#include <math.h>
using namespace std;
int MaiorVetor (int v[], int n);
 
 int main(){
 	int v[10=]{5, 7, 2, 3, 4, 10, 9, 18, 4, 1};
 	int maior;
 	
 	int maior= MaiorVetor(v,n);
 	cout<< " o maior numero é <<"maior">>.";
 	return 0;
 }
 	int MaiorVetor (int v[], int n){
 		int maior=v[0];
 		
 		for(int i = 1; i< n; i++){
 			if(v[i]> maior){
 				maior=v[i];
			 }
		 }
		 	 return maior
	 }
	
 
