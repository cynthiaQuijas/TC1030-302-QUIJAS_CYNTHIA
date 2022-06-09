// Cynthia Cristal Quijas Flores
// A01655996
// Peliculas.hpp

#ifndef Peliculas_hpp
#define Peliculas_hpp

#include <stdio.h>
#include <iostream>
#include "Pelicula.hpp"

const int MAX_PEL = 50;

class Peliculas{
// Atributos
private:
  Pelicula*arrPtrpeliculas[MAX_PEL];
  int cantidad

// Métodos
public:
  // Método constructor
  Peliculas();

  // Métodos Modificadores (SETS)
  void setPtrPelicula(Pelicula *_pelicula);
  void setCantidadPeliculas(int _cantidad);

  // Métodos de Acceso (GETS)
  Pelicula * getPtrPelicula();
  int getCantidadPeliculas();
  
   // Otros métodos
  void leerAcrhivo();
  void reporteTodasLasPeliculas();
  void reporteConCalificacion(double _calificacionPromedio);
  void reporteGenero(string _genero);


};


#endif /* Peliculas_hpp */