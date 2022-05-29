// Cynthia Cristal Quijas Flores
// A01655996
// Herencia

// Librerias
#include <iostream>
#include <string>
#include "Estudiante.hpp"
using namespace std;

Estudiante::Estudiante( ) : Persona( )
{
carrera = "Chef";
}
Estudiante::Estudiante(string nombre, int edad, string ca) : Persona(nombre, edad)
{
carrera = ca;
}
string Estudiante::getCarrera()
{
return carrera;
}
void Estudiante::setCarrera(string ca)
{
carrera = ca;
}
string Estudiante::str()
{
return "Nombre: " + nombre + " edad: " + to_string(edad) + " Carrera: "+carrera;
}