// Cynthia Cristal Quijas Flores
// A01655996
// Serie.h

#ifndef Serie_h
#define Serie_h

#include <stdio.h>
#include "Video.h"
#include "Episodio.h"


class Serie: public Video{

protected:
  Episodio episodios[5]{};
  int cantidad;


public: 

  // Método constructor
  Serie();

  // Método constructor con parametros (sin episodios)
  Serie(string _iD, string _titulo, int _duracion, string _genero, double _calificacion, int _cantidad);

  // Destructor de un objeto de la clase Serie
  ~Serie();

  // Métodos modificadores (sets)
  void setEpisodio(int iEp, Episodio _episodio);
  void setCantidad(int _cantidad);

  // Métodos de acceso (get)
  Episodio getEpisodio(int _iEp);
  int getCantidad();

    

  // Otros métodos 
  double calculaCalPromedio(); 
  string str();
    
};


#endif /*Serie_h*/
