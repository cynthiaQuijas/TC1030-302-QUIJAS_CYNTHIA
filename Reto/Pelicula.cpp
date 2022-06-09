// Cynthia Cristal Quijas Flores
// A01655996
// Pelicula.cpp


#include <iostream>
#include "video.hpp"

using namespace std;

Video::Video(string _ID, string _titulo, Duracion _duracion, int _genero, int _calificacion){
    ID           = _ID;
    titulo       = _titulo;
    duracion     = _duracion;
    genero       = _genero;
    calificacion = _calificacion;
}

void Video::impGenero(){
    string genre;

    switch(genero){
        case 1:
            genre = "accion";
            break;
        case 2:
            genre = "comedia";
            break;
        case 3:
            genre = "drama";
            break;
    }

    cout << genre;
}

void Video::mostrar(){
    cout << "ID: " << ID << endl;
    cout << "Nombre: " << titulo << endl;
    cout << "Duracion: "; duracion.impHora();
    cout << "Genero: "; impGenero(); cout << endl;
    cout << "Calificacion: " << calificacion << endl;
}

void Video::calificar(double cal){
    calificacion = (calificacion+cal)/2;
}
