#include <iostream>
#include <math.h>
using namespace std;

 int interiter(int v[], int n);
 int troca(int v[], int i, int f);
 int mostrar(int v[], int n);
 
 int main(){
 	int v[10]= {10, 20, 25, 28, 30, 46, 56, 68, 82, 97};
 	mostrar(v, 10);
 	inverter(v, 10);
 	mostrar(v,10);
 }
 
 int mostrar(int v[], int n){
 	for (int i=0; i<n; i++){
 		cout<<" <<v[i>>.";
	 }
 }
 int inverter (int v[], int n){
 	int i=0;
 	int f=n-1;
 	
 	while(i<f){
 		troca(v, i, f);
 		i++; f--;
	 }
 }
  int troca(int v[], int i, int f){
  	int aux= v[i];
  	v[i]= v[f];
  	v[f]=aux;
  }
 
