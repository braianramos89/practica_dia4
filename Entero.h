
#ifndef TEMPLATECPP_ENTERO_H
#define TEMPLATECPP_ENTERO_H

class Entero{


private :
    int numero;

public:
    Entero(int);
    ~Entero();
    Entero();

    void numerosPrimos(int );
    void setEntero(int );
    int getEntero();

};

inline void Entero::setEntero(int numero) {
    this->numero = numero;
}

inline int Entero::getEntero() {
    return this->numero;
}




#endif //TEMPLATECPP_ENTERO_H
