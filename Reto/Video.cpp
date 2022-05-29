// Cynthia Cristal Quijas Flores
// A01655996
// Video.cpp

#include "Video.hpp"

    // Métodos constructores
Video::Video(){
  iD = "000";
  titulo = "Los tigres perdieron muy triste";
  duracion = 105;
  genero = "Tragedia-Drama";
  calificacionPromedio = 0;

}

Video::Video(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio){
  iD = _iD;
  titulo = _titulo;
  duracion = _duracion;
  genero = _genero;
  calificacionPromedio = _calificacionPromedio;
}

// Métodos de modificadores (sets)
void Video::setId(string _iD){
  iD = _iD;
}
void Video::setTitulo(string _titulo){
  titulo = _titulo;
}
void Video::setDuracion(int _duracion){
  duracion = _duracion;
}
void Video::setGenero(string _genero){
  genero = _genero;
}
void Video::setCalificacion(double _calificacionPromedio){
  calificacionPromedio = _calificacionPromedio;
}

// Métodos de acceso (gets)
string Video::getId(){
  return iD;
}
string Video::getTitulo(){
  return titulo;
}
int Video::getDuracion(){
  return duracion;
}
string Video::getGenero(){
  return genero;
}
double Video::getCalificacion(){
  return calificacionPromedio;
}

// Otros métodos
string Video::str(){
  return iD + ',' + titulo + ',' + to_string(duracion) + ',' + genero + ',' + to_string(calificacionPromedio);
}