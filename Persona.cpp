// Cynthia Cristal Quijas Flores
// A01655996
// Herencia

// Librerias
#include <iostream>
#include <string>
#include "Persona.hpp"
using namespace std;    


Persona::Persona( ) {
    nombre = "Chilindrina";
    edad = 100;
}

Persona::Persona(string _nombre, int _edad) {
    nombre = _nombre;
    edad = _edad;
}

string Persona::getNombre( ) {
    return nombre;
}

int Persona::getEdad() {
    return edad;
}

void Persona::setNombre(string _nombre) {
    nombre = _nombre;
}
void Persona::setEdad(int _edad) {
    edad = _edad;
    
}
string Persona::str() {
    return "Nombre: " + nombre + " edad: " + to_string(edad);
};