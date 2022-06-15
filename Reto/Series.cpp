// Cynthia Cristal Quijas Flores
// A01655996
// Series.cpp

#include "Series.h"
#include "Serie.h"
#include <iostream>
#include <fstream>
using namespace std;


Series::Series(){}

void Series::leerArchivo(){
  string linea, dato, row[6];
  int iRow{}, iS{}, cantEpisodios{};
  fstream lectura;
  Episodio *episodio;
  
  // Leer las series
  lectura.open("Serie2021.csv",ios::in); // Revisar cuál es la dirección
  int cantidad = 0;
  while (getline(lectura, linea)){
    cout << linea << endl;
    std::stringstream registro(linea);
    iRow = 0;
    while (getline(registro, dato, ',')){
      cout << dato << endl;
      row[iRow++] = dato;
    }
    arrPtrSeries[cantidad] = new Serie(row[0], row[1], stoi(row[2]), row[3], stod(row[4]),0);
    arrPtrSeries[cantidad]->str();
    cantidad++;
  }
  lectura.close();

  // Leer los episodios de las series
  lectura.open("Episodio2021.csv",ios::in); // Revisar cuál es la dirección
  while (getline(lectura,linea)){
    cout << linea << endl;
    std::stringstream registro(linea);

    iRow = 0;
    while (getline(registro,dato,',')){
      row[iRow++] = dato;
    }
    iS = stoi(row[0]) - 500;
    episodio = new Episodio(row[1], stoi(row[2]), stod(row[3]));
    cantEpisodios = arrPtrSeries[iS]->getCantidad();
    if (cantEpisodios < 5){
      arrPtrSeries[iS]->setEpisodio(cantEpisodios,*(episodio));
      arrPtrSeries[iS]->setCantidad(++cantEpisodios);
    }
    cout << arrPtrSeries[iS]->str() << endl;
  }
  lectura.close();
  for (int iS = 0; iS < cantidad; iS++)
    cout << arrPtrSeries[iS]->str() << endl;
}

// Métodos modificadores (sets)
void Series::setPtrSerie(Serie * _ptrSerie){
  if (Cantidad  <  MAX_SERIES){
    arrPtrSeries[Cantidad++]= _ptrSerie;
  }
}

void Series::setCantidadSeries(int _cantidad){
  Cantidad = _cantidad;
}

// Métodos de acceso (gets)
Serie* Series::getPtrSerie(string _iD){
  return new Serie;
}

int Series::getCantidadSeries(){
  return Cantidad;
}

/*
void Series::reporteTodasLasSeries(){  
  int acum = 0;
  int prom = 0;
  for (int cont = 0; cont < cantidad; cont++){
    cout << "Prom" << arrPtrSeries[cont]->str() << endl;
    acum = acum + arrPtrSeries[cont] -> getCalificacion;
    prom = acum / cantidad;
    cout << "El promedio es" + to_string(prom) << endl;
  }
}

void Series::reporteConCalificacion(double _calificacion){

  int count=0;
  for (int iR=0; iR < MAX_SERIES; iR++){
    if (arrPtrSeries[iR]-> getCalificacion() == _calificacion){
      cout << iR << ' ' << arrPtrSeries[iR]->str() << endl;
      count++;
    }
}
  if (count == 0){
    cout<<"No hay series con la calificación deseada: "<< _calificacion << endl;
  }
  
}
  
void Series::reporteGenero(string _genero){

  int count=0;
  for (int iR=0; iR < MAX_SERIES; iR++){
    if (arrPtrSeries[iR]-> getGenero() == _genero){
      cout << iR << ' ' << arrPtrSeries[iR]->str() << endl;
      count++;
    }
}
  if (count == 0){
    cout<<"No hay series con la calificación deseada: "<< _genero << endl;
  }
  
  
}
//  Calcular la calificación de cada serie en base a sus episodios, manda llamar al método calculaCalPromedio de la clase Serie para que se calcula la calificación promedio de la serie
void Series::calcularCalificacionSeries(){
  int ac = 0;
  int pr = 0;
  for(int iR = 0; iR < cantidad; iR++){
    cout << arrPtrSeries[cont] << endl;
    ac = ac + arrPtrSeries[cont] -> calculaCalPromedio;
    pr = ac / cantidad;
    cout << "El promedio de la serie es" + to_string(pr) << endl;
  }
}
*/

void Series::reporteTodasLasSeries(){
  double p = 0;
  double a = 0;
  for (int cont = 0; cont < MAX_SERIES; cont++){
    cout << arrPtrSeries[cont] << endl;
    a = a + arrPtrSeries[cont] -> getCalificacion();
  }
}

void Series::reporteConCalificacion(double _calificacion){

  int count=0;
  for (int iR=0; iR < MAX_SERIES; iR++){
    if (arrPtrSeries[iR]-> getCalificacion() == _calificacion){
      cout << iR << ' ' << arrPtrSeries[iR]->str() << endl;
      count++;
    }
}
  if (count == 0){
    cout<<"No hay series con la calificación deseada: " << _calificacion << endl;
  }
  
}
  
void Series::reporteGenero(string _genero){
  int count=0;
  for (int iR=0; iR < MAX_SERIES; iR++){
    if (arrPtrSeries[iR]-> getGenero() == _genero){
      cout << iR << ' ' << arrPtrSeries[iR]->str() << endl;
      count++;
    }
}
  if (count == 0){
    cout<<"No hay series con la calificación deseada: "<< _genero <<endl;
  }
  
  
}
void Series::calcularCalificacionSeries(){
  
}
