/*
 No  sistemas  de  coordenadas  conhecido  como  R2,  um  ponto é  constituído  de dois  componentes:
 a  abscissa  indica  a  sua  localização  no eixo xe a  ordenadaindica  a  sua  localização  noeixo y.  
 Um  segmento  de  reta  é  delimitado por  um ponto  inicial (xi, yi)e umponto  final  (xf, yf). 
Por  exemplo,  osegmento  de  reta abaixoestá delimitado pelos pontos (2, 1) e (7,6).


O  ponto  médio  (xm, ym)  de  um  segmento  de  reta  é calculado  pelas  seguintes expressões:2fimx+x=xe 2fimy+y=y. P
rograme um  módulo para  receber em seus parâmetros os pontos que delimitam um segmento de reta e devolver como resposta o  seu  ponto  médio. 
Observe  que  seu  módulo  precisa exportarduas informações:  a  abscissa  e  a  ordenada  do  ponto  médio.  Pense em  como  resolver esta  questão.  
Em  seguida,  chame  este  módulo  em  um  módulo mainpara  testar seu programa.
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
