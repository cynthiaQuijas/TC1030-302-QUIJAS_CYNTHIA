// Cynthia Cristal Quijas Flores
// A01655996
// Peliculas.hpp

#ifndef Peliculas_hpp
#define Peliculas_hpp

#include <stdio.h>
#include <iostream>
#include "Peliculas.hpp"
#include <sstream>
#include <fstream>


const int MAX_PEL =50;

class Peliculas{
    
    //Atributos
    private:
      // Pelicula * arrPtrPeliculas[MAX_PEL];
      int cantidad;
    
    //Metodos

    public:
      //Metodo construtor
      Peliculas();
      Peliculas(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio, int _oscares);
      
      //Metodos modificadores(SETS)
      void setPtrPelicula(Pelicula *_ptrPelicula);
      void setCantidadPeliculas(int _cantidad);
      
      //Metodos de acceso(GETS)
      Pelicula * getPtrPelicula(string _id);
      int getCantidadPeliculas();
      
      
      //otros Metodos
      void leerArchivo();
      void reporteTodasLasPeliculas();
      void reporteConCalificacion(double _calificacionPromedio);
      void reporteGenero(string _genero);
      
  
};



#endif /* Peliculas_hpp */
