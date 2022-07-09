#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int conversorhora(int m)
{
    int h;
    h = m / 60;
    return h;
}

int conversorminuto(int m)
{
    float mi;
    mi = (m) % 60;
    return mi;
}
main()
{
    int m, horas, minutos;
    cout << "Insira o total de minutos passados: ";
    cin >> m;
    horas = conversorhora(m);
    minutos = conversorminuto(m);

    cout << "A hora corrente e: "<<horas<<" horas e "<<minutos<<" minutos.";
    getch();
}

