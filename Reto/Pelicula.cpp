// Cynthia Cristal Quijas Flores
// A01655996
// Pelicula.hpp

#ifndef Pelicula_hpp
#define Pelicula_hpp


#include <stdio.h>
#include "Video.hpp"

class Pelicula : public Video {

private:
    int oscares;
    
    
public:
    
    // Métodos Constructores
    Pelicula();
    Pelicula(string _iD, string _titulo, int _duracion,string _genero, double _calificacionPromedio, int _oscares);

    // Métodos de acceso (sets)
    void setOscares(int _oscares);
   
    // Métodos de acceso (get)
    int getOscares();

    // Otros métodos
    string str();
    
};



#endif /* Pelicula_hpp */
