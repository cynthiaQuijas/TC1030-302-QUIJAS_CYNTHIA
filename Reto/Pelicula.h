// Cynthia Cristal Quijas Flores
// A01655996
// Pelicula.h

#ifndef Pelicula_h
#define Pelicula_h


#include <stdio.h>
#include "Video.h"

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

#endif /* Pelicula_h */
