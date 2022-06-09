// Cynthia Cristal Quijas Flores
// A01655996
// Peliculas.cpp

#include "Peliculas.hpp"

Peliculas::Peliculas(){}

// Métodos Modificadores (SETS)
void Peliculas::setPtrPelicula(Pelicula *_pelicula){}
void Peliculas::setCantidadPeliculas(int _cantidad){}

// Métodos de Acceso (GETS)
Pelicula * Peliculas::getPtrPelicula(){}
int Peliculas::getCantidadPeliculas(){}
  
// Otros métodos
void leerAcrhivo(){}
void reporteTodasLasPeliculas();
void reporteConCalificacion(double _calificacionPromedio);
void reporteGenero(string _genero);