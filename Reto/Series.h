// Cynthia Cristal Quijas Flores
// A01655996
// Series.h

#ifndef Series_h
#define Series_h

#include <stdio.h>
#include "Serie.h"
#include <sstream>
#include <fstream>

const int MAX_SERIES = 50;


class Series{

private:
  Serie *arrPtrSeries[MAX_SERIES];
  int Cantidad{};


public:
  // Método constructor default
  Series();

  void leerArchivo();

  // Métodos modificadores (sets)
  void setPtrSerie(Serie *ptr);
  void setCantidadSeries(int _cantidad);

  // Métodos de acceso (gets)
  Serie* getPtrSerie(string _iD);

  int getCantidadSeries();

  void reporteTodasLasSeries();
  void reporteConCalificacion(double _calificacion);
  void reporteGenero(string _genero);
  void calcularCalificacionSeries();
};

#endif /* Series_h */
