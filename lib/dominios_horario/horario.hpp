#ifndef HORARIO_HPP_INCLUDED
#define HORARIO_HPP_INCLUDED
#include <iostream>
using namespace std;

class Horario{
private:
    string horario;
    bool validarHorario(string horario);

public:
    string getHorario();
    bool setHorario(string horario);

};

inline string Horario::getHorario(){
    return horario;}

#endif // HORARIO_HPP_INCLUDED
