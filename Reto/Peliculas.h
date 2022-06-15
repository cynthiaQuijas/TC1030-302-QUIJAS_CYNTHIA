// Cynthia Cristal Quijas Flores
// A01655996
// Peliculas.h

#ifndef Peliculas_h
#define Peliculas_h

#include <stdio.h>
#include "Pelicula.h"
#include <sstream>
#include <fstream>
#include <iostream>
const int MAX_PEL =50;

class Peliculas{
private:
  Pelicula * arrPtrPeliculas[MAX_PEL];
  int cantidad;

public:
  // Método construtor
  Peliculas();
  Peliculas(string _iD, string _titulo, int _duracion,string _genero, float _calificacionPromedio, int _oscares);
  
  // Métodos modificadores (sets)
  void setPtrPelicula(Pelicula *_ptrPelicula);
  void setCantidadPeliculas(int _cantidad);
  
  // Métodos de acceso (gets)
  Pelicula * getPtrPelicula(string _id);
  int getCantidadPeliculas();
  
  
  // Otros métodos
  int leerArchivo();
  void reporteTodasLasPeliculas();
  void reporteConCalificacion(float _calificacionPromedio);
  void reporteGenero(string _genero);
  
  
};

#endif /*Peliculas_h*/
