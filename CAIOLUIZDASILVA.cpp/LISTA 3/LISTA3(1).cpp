/*
 No  sistemas  de  coordenadas  conhecido  como  R2,  um  ponto �  constitu�do  de dois  componentes:
 a  abscissa  indica  a  sua  localiza��o  no eixo xe a  ordenadaindica  a  sua  localiza��o  noeixo y.  
 Um  segmento  de  reta  �  delimitado por  um ponto  inicial (xi, yi)e umponto  final  (xf, yf). 
Por  exemplo,  osegmento  de  reta abaixoest� delimitado pelos pontos (2, 1) e (7,6).


O  ponto  m�dio  (xm, ym)  de  um  segmento  de  reta  � calculado  pelas  seguintes express�es:2fimx+x=xe 2fimy+y=y. P
rograme um  m�dulo para  receber em seus par�metros os pontos que delimitam um segmento de reta e devolver como resposta o  seu  ponto  m�dio. 
Observe  que  seu  m�dulo  precisa exportarduas informa��es:  a  abscissa  e  a  ordenada  do  ponto  m�dio.  Pense em  como  resolver esta  quest�o.  
Em  seguida,  chame  este  m�dulo  em  um  m�dulo mainpara  testar seu programa.
*/
 #include <iostream>
 using namespace std;
 
void segmentoReta (float &xi, float &yi, float xf, float yf)
{
	float xm, ym;
	xm = (xi + xf) / 2;
	ym = (yi + yf) /2;
	xi= xm;
	yi= ym;
	
 /* xi vai passar a ter o valor de xm e yi vai passar a ter o valor de ym */
}

main()
{
  float xi, yi, xf, yf;
  xi= 2;
  yi= 4;
  xf= 4;
  yf= 8;
  segmentoReta(xi, yi, xf, yf);
  cout<< "As coordenadas sao ( "<< xi << "," << yi<< ") \n";
}
