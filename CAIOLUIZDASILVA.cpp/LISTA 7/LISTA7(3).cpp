#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
using namespace std;


int minha_srtcmp(char t1[], char t2[])
{
string s1, s2;
s1 = t1;
s2 = t2;
if (s1 < s2)
return -1;
else if (s1 > s2)
return 1;
else return 0;
}

main()
{
	
}
