#include "laboratorio.h"
#include<fstream>

Laboratorio::Laboratorio()
{
    cont = 0;
}

void Laboratorio::AgregarAlFinal(const Computadora &c)
{
    if (cont < 5){
        array[cont] = c;
        cont++;
    }
    else
    {
        cout<<"array completo"<<endl;
    }
    
}

void Laboratorio::mostrar()
{
    cout<<left;
    cout<<setw(19)<<"Sistema Operativo";
    cout<<setw(11)<<"Marca";
    cout<<setw(13)<<"Memoria Ram";
    cout<<setw(11)<<"Almacenamiento";
    cout<<endl;
    
    for(size_t i = 0; i < cont; i++){
        Computadora &c = array[i];
        cout<<c;
    }
}

void Laboratorio::Respaldar_Tabla()
{
    ofstream archivo("Computadoras_tablas.txt");
    if (archivo.is_open()){
        archivo<<left;
        archivo<<setw(19)<<"Sistema Operativo";
        archivo<<setw(11)<<"Marca";
        archivo<<setw(13)<<"Memoria Ram";
        archivo<<setw(11)<<"Almacenamiento";
        archivo<<endl;
        for(size_t i = 0; i < cont; i++)
        {
            Computadora &c = array[i];
            archivo<<c;
        }
    }    
    archivo.close();

}

void Laboratorio::respaldar()
{
    ofstream archivo("Computadoras.txt");
    if (archivo.is_open()){
        for(size_t i = 0; i < cont; i++)
        {
            Computadora &c = array[i];
            archivo<<c.getSistemOp()<<endl;
            archivo<<c.getNomE()<<endl;
            archivo<<c.getRam()<<endl;
            archivo<<c.getAlm()<<endl;
        }
    }    
    archivo.close();

}


