// Cynthia Cristal Quijas Flores
// A01655996
// Herencia

// Librerias
#include <iostream>
#include <string>
using namespace std;

class Persona
{public:
Persona();
Persona(string, int);
string getNombre();
int getEdad();
void setNombre(string);
void setEdad(int);
string str();
protected:
string nombre;
int edad;
};