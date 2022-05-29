// Cynthia Cristal Quijas Flores
// A01655996
// Serie.cpp

#include <studio.h>
#include "Serie.hpp"

Serie::Serie():Video(){
  cantidad = 0;
}
Serie::Serie(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio):Video(_iD, _titulo, _duracion, _genero, 0){
  cantidad = 0;
}

// Métodos modificadores (SETS)
void Serie::setEpisodio(int _index, Episodio _episodio){
  episodios[_index] = _episodio;
}
void Serie::setCantidad(int _cantidad){
  cantidad = _cantidad;
}

// Métodos de acceso (GETS)
Episodio Serie::getEpisodio(int _index){
  Episodio ep;
  return episodios[_index];
  return Episodio();
}
int Serie::getCantidad(){
  return cantidad;
}

// Otros métodos
double Serie::calculaCalPromedio(){
  double acum = 0;
  for(int index = 0; index < cantidad; index++)
    acum = acum + episodios[index].getCalificacion();
  if (cantidad > 0)
    return acum / cantidad;
  else
    return 0;
}
string Serie::str(){
  string acum = "\n";
  for(int index = 0; index < cantidad; index++)
    acum = acum + episodios[index].str()+'\n';
  
  return iD + ',' + titulo + ',' + to_string(duracion) + ',' + genero + ',' + to_string(calificacionPromedio) + acum;
}