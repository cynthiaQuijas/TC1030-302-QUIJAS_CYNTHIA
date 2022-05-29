// Cynthia Cristal Quijas Flores
// A01655996
// Serie.hpp

#ifndef Serie_hpp
#define Serie_hpp

#include <studio.h>
#include "Video.hpp"
#include "Episodio.hpp"

class Serie: public Video{
private:
  Episodio episodios[5];
  // cantidad de episodios de la serie
  int cantidad;

public:
  Serie();
  Serie(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio);

  // Métodos modificadores (SETS)
  void setEpisodio(int _index, Episodio _episodio);
  void setCantidad(int _cantidad);

  // Métodos de acceso (GETS)
  Episodio getEpisodio(int _index);
  int getCantidad();

  // Otros métodos
  double calculaCalPromedio();
  string str();

};

#endif /* Serie_hpp */ 