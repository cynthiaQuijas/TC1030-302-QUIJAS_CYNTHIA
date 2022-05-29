// Cynthia Cristal Quijas Flores
// A01655996
// Episodio.hpp

#ifndef Episodio_hpp
#define Episodio_hpp

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class Episodio{
protected: 
  string titulo;
  int temporada;
  int calificacion;

public:
  // Métodos constructores
  Episodio();
  Episodio(string titulo, int temporada, double calificacion);
  string str();
  

  // Métodos modificadores (sets)
  void setTitulo(string);
  void setTemporada(int);
  void setCalificacion(int);

  // Métodos constructores (gets)
  string getTitulo();
  int getTemporada();
  int getCalificacion();

};

#endif /* Episodio_hpp */ 