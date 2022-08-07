//
// Created by braian on 07/08/2022.
//

#include "Entero.h"
#include <iostream>

using namespace std;

Entero :: Entero(int numero){

    this->numero = numero;
}

Entero :: Entero(){}

Entero :: ~Entero(){}

void Entero::numerosPrimos(int numero) {

    int x = 2;
    int c;
     for (x = 2;x <= numero;x++){
         c = 0;
         for (int i = 2; i <= x ; ++i) {

             if(x % i == 0 ){
                  c++;
             }
         }
         if (c == 1){
                 cout<<" "<<x<< endl;
         }

     }
}

