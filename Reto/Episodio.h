// Cynthia Cristal Quijas Flores
// A01655996
// Episodio.h

#ifndef Episodio_h
#define Episodio_h

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class Episodio{
    
public:
    // Métodos Constructores
    Episodio();
    Episodio(string _titulo, int _temporada,int _calificacion);

    //Métodos modificadores (sets)
    void setTitulo(string _titulo);
    void setTemporada(int _temporada);
    void setCalificacion(int _calificacion);
   
    // Métodos de acceso (get)
    string getTitulo();
    int getTemporada();
    int getCalificacion();
    
    //Otros Métodos
    string str();
    
private:
    string titulo;
    int temporada;
    int calificacion;
    
};

#endif /*Episodio_h*/
