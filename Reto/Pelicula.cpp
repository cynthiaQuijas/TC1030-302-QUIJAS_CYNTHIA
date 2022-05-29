// Cynthia Cristal Quijas Flores
// A01655996
// Pelicula.cpp


#include "Pelicula.hpp"

// Métodos constructores
Pelicula::Pelicula(){
    oscares = 3;

}

Pelicula::Pelicula(int _oscares){
        oscares = _oscares;
    }

// Métodos de modificadores (sets)
void Pelicula::setOscares(int _oscares){
    oscares = _oscares;
}

// Métodos de acceso (gets)
string Pelicula::getOscares(){
    return oscares;
}


// Otros métodos
string Video::str(){
    return to_string(oscares);
}