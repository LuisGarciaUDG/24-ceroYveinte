/* programa_24 Imprimir los numeros entre el 0 y el 20
estructura: ciclica
autor: Luis Alberto Garcia Rodriguez
numero de lista 11
fecha 03 de marzo del 2015
*/
#include <iostream>
#include <windows.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int x;
    x=2;
    cout<<"\n Programa que imprime los numeros entre el 0 y el 20";
    cout<<"\n\n Estrucutra de control do while\n\n";
    do
        {
        cout<<"\n "<<x;
        x=x+2;
        }
    while (x<20);
        cout<<"\n\n Presione enter para salir...\n\n";
        system ("pause");

    return 0;
}
