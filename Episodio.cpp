// Cynthia Cristal Quijas Flores
// A01655996
// Episodio.cpp

#include "Episodio.hpp"

// Métodos constructores
Episodio::Episodio(){
  titulo = "Título";
  temporada = 0;
  calificacion = 0;

}

Episodio::Episodio(string _titulo, int _temporada, double _calificacion){
  titulo = _titulo;
  temporada = _temporada;
  calificacion = _calificacion;
}

string Episodio::str(){
  return titulo + ',' + to_string(temporada) + ',' + to_string(calificacion);
}

// Métodos de modificadores (sets)
void Episodio::setTitulo(string _titulo){
    titulo = _titulo;
}

void Episodio::setTemporada(int _temporada){
    temporada = _temporada;
}

void Episodio::setCalificacion(int _calificacion){
    calificacion = _calificacion;
}

// Métodos de acceso (gets)
string Episodio::getTitulo(){
    return titulo;
}

int Episodio::getTemporada(){
    return temporada;
}

int Episodio::getCalificacion(){
    return calificacion;
}
