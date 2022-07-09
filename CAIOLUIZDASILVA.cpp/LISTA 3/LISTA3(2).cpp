#include <iostream>
using namespace std;

void soma (float &nx, float ny, float dx, float dy)
{
	nx= ((nx * dy) +(ny *dx)) / (dx * dy);

}

void subtracao (float &nx, float ny, float dx, float dy)
{
     nx= ((nx * dy) - (ny * dx)) / (dx * dy);
    
}

void multiplicacao (float &nx, float ny, float dx, float dy)
{
    nx= (nx * ny) / (dx * dy);
    
}
 
void divisao (float &nx, float ny, float dx, float dy)
{
    nx= (nx * dy) / (dx * ny);
}


main()
{
	float nx, ny, dx, dy;
	nx = 4;
	ny = 4;
	dx = 2;
	dy = 2;
	multiplicacao(nx, ny, dx, dy);
	cout<<" O resultado da divisao eh "<< nx << "\n";	
}	
	

