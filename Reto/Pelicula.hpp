// Cynthia Cristal Quijas Flores
// A01655996
// Pelicula.hpp

#ifndef Pelicula_hpp
#define Pelicula_hpp

#include <stdio.h>
#include <iostream>
using namespace std;
#include "Video.hpp"

class Pelicula{
private: 
    int oscares;

public:
    // Métodos constructores
    Pelicula();
    Pelicula(string _iD, string _titulo, int _duracion, 
    string _genero, double _calificacionPromedio);

    // Métodos modificadores (sets)
    void setOscares(int _oscares);

    // Métodos constructores (gets)
    int getOscares();

    string str();
};

#endif /* Pelicula_hpp */ 