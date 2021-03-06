// Cynthia Cristal Quijas Flores
// A01655996
// Pelicula.cpp


#include "Pelicula.h"
#include"Video.h"
#include <iostream>

// Métodos Constructores
Pelicula::Pelicula() : Video(){
   oscares = 6;
}

// Método constructor con parámetros

Pelicula::Pelicula(string _iD, string _titulo, int _duracion,string _genero, double _calificacionPromedio, int _oscares) : Video( _iD, _titulo, _duracion, _genero, _calificacionPromedio){
    oscares= _oscares;
}


// Métodos de acceso (get)
int Pelicula::getOscares(){
    return oscares;
}
    

// Otros métodos
string Pelicula::str(){
    return iD + ", " + titulo + ", " + to_string(duracion) + ", " + genero + ", " + to_string(calificacionPromedio)+ ", " + to_string(oscares);
}
