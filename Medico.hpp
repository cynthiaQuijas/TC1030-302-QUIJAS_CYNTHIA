// Cynthia Cristal Quijas Flores
// A01655996
// Herencia

// Librerias
#include <iostream>
#include <string>
#include "Medico.hpp"
using namespace std;

class Medico : public Persona
{
public:
 Medico();
Medico(string, int, string, int);
string getEspecialidad();
int getPacientes();
void setEspecialidad(string);
void setPacientes(int);
string str();
private:
 string especialidad;
 int pacientes;
};
