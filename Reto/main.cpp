// Cynthia Cristal Quijas Flores
// A01655996
// main.cpp

#include "Video.hpp"
#include "Serie.hpp"
#include <iostream>

int main(){
    // Declaracion de un video default
    Video video1;

    // Declaración de un video con parámetros
    Video video2{"001", "Drama de los Rayados", 120, "Drama, Super Tragedia, Eliminación", -100};
    Serie reina{"002", "La Reina", 300, "Drama", 0};

    reina.setEpisodio(0, episodio1);
    reina.setCantidad(reina.getCantidad() + 1);
    reina.setEpisodio(1, episodio1);
    reina.setCantidad(reina.getCantidad() + 1);

    cout << reina.str() << endl;

    // Desplegar el  video1
    cout << video1.str() << endl;
    cout << video2.str() << endl;

    return 0;

}