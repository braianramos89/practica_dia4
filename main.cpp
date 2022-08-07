#include <iostream>
#include "Entero.h"

using namespace std;

int main() {

    Entero numero;
    int num;

    cout << "Ingrese un numero entero : "<< endl;
    cin>>num;


    numero.setEntero(num);

    numero.numerosPrimos(numero.getEntero());

    return 0;
}
