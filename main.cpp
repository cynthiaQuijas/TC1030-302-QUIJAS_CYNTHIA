// Cynthia Cristal Quijas Flores
// A01655996
// Herencia

// Librerias
#include <iostream>
#include <string>
#include "Estudiante.hpp"
#include "Persona.hpp"
using namespace std;

int main()
{ Estudiante chabelo("Chabelo", 125, "Medico"), chilindrina;
Persona chano("Chano", 80), chonita;
std::cout << "Los datos del estudiante 1 son: " << chabelo.str() << endl;
std::cout << "Los datos del estudiante 2 son: " << endl;
std::cout << "Nombre " << chilindrina.getNombre() << " Edad: "
<< chilindrina.getEdad() << " Carrera " << chilindrina.getCarrera();
std::cout << "Los datos de la persona 1 son: " << chano.str() << endl;
std::cout << "Los datos de la persona 2 son: "<<endl;
std::cout << "Nombre " << chonita.getNombre() << " Edad:" << chonita.getEdad();
return 0;
}