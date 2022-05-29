// Cynthia Cristal Quijas Flores
// A01655996
// Herencia

// Librerias
#include <iostream>
#include <string>
#include "Medico.hpp"
using namespace std;

Medico::Medico( ) : Persona( )
{
especialidad = "Infectologo";
pacientes = 645;
}
// Constructor con parámetros
Medico::Medico(string _nombre, int _edad, string _especialidad, int _pacientes) : Persona(_nombre,
_edad)
{ // de pref. no usar - prefijo this-> para diferenciar el nombre del atributo al nombre del parámetro
especialidad = _especialidad;
pacientes = _pacientes;
}
string Medico::getEspecialidad()
{
return especialidad;
}
int Medico::getPacientes()
{
return pacientes;
}
string Medico::str( )
{
return "Nombre: " + nombre + " edad: " + to_string(edad) + " Especialidad: "+ especialidad + "Pacientes: " + to_string(pacientes);
}
