#include <iostream>
#include<fstream>
#ifndef LABORATORIO_H
#define LABORATORIO_H
#include "Computadora.h"

class Laboratorio
{
    Computadora array[5];
    size_t cont;
public:
    Laboratorio();
    void AgregarAlFinal(const Computadora &c);
    void mostrar();
    void Respaldar_Tabla();
    void Respaldar();

    friend Laboratorio& operator<<(Laboratorio &e, const Computadora &c)
    {
        e.AgregarAlFinal(c);

        return e;
    }
};

#endif
