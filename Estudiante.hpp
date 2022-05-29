// Cynthia Cristal Quijas Flores
// A01655996
// Herencia

// Librerias
#include <iostream>
#include <string>
using namespace std;

#include "Persona.hpp"
class Estudiante : public Persona
{
public:
Estudiante();
Estudiante(string, int, string);
string getCarrera();
void setCarrera(string);
string str();
private:
string carrera;
};