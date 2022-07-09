#include <iostream>
#include <math.h>
using namespace std;

0,0 0,1 0,2 0,3 0,4 0,5 0,6 0,7
1,0 1,1 1,2 1,3 1,4 1,5 1,6 1,7
2,0 2,1 2,2 2,3 2,4 2,5 2,6 2,7
3,0 3,1 3,2 3,3 3,4 3,5 3,6 3,7
4,0 4,1 4,2 4,3 4,4 4,5 4,6 4,7
5,0 5,1 5,2 5,3 5,4 5,5 5,6 5,7
6,0 6,1 6,2 6,3 6,4 6,5 6,6 6,7
7,0 7,1 7,2 7,3 7,4 7,5 7,6 7,7

bool torre ( int li, int ci, int If, int cf){
	
	if ((li >=0 && li<8) && (ci>=0 && ci<8) && (If>=0 && If<8) && (cf>=0 && cf<8)) && ((li== If && ci!=cf) || (ci== cf && li!=If))
	return true;
	else return false;
}
int TorreModificada ( int li, int ci, int If, int cf){
	
		if ((li >=0 && li<8) && (ci>=0 && ci<8) && (If>=0 && If<8) && (cf>=0 && cf<8)) && ((li== If && ci!=cf) || (ci== cf && li!=If)){
			if (li==If & ci!=cf)
			return 1;
			else if (ci==cf & li!=If)
			return 2;
			else return 0;
		}
		((li==If && ci!=cf) || (ci==cf && li!=If))
		return true;
		else return false;
}


