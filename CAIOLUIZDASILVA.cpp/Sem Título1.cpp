#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

 main ()
 {
       int n, c, d, u, cm, dm, um;
       printf ("Digite um valor inteiro de seis digitos: "); 
       scanf ("%i",&n);
       
       cm= n/1000000;
       dm= n%1000000;
       dm= n/100000;
       um= n%100000;
       um= n/10000;
       c= n%10000;
       c= n/100;
       d= n%100;
       d= n/10;
       u= n%10;
       
       printf ("/n%i = CENTENA DE MILHAR\n%i = DEZENA DE MILHAR\n%i = UNIDADE DE MILHAR \n%i = CENTENA\n%i = DEZENA\n%i = UNIDADE",cm, dm, um,c, d, u, )
       
    getchar();
    printf("\n\n");
    system("pause");
    return (0);
       
}
 
