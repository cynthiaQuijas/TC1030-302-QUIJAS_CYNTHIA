// Cynthia Cristal Quijas Flores
// A01655996
// Peliculas.cpp

#include "Peliculas.hpp"
#include "Pelicula.hpp"
#include <sstream>
#include <fstream>

Peliculas::Peliculas(){}
Peliculas::Peliculas(string _iD, string _titulo, int _duracion,string _genero, double _calificacionPromedio, int _oscares){
}
   


// Métodos adicionales

void Peliculas::leerArchivo() {
    
    // fin-file input
    fstream fin;
    //
    
    string row[6];
    //
    
    string line;
    
    string word;
    
    
    // Abrir archivo de entrada
    fin.open("Pelicula.csv",ios::in);
    
    int cantidad=0;
    
    while (getline(fin,line)){
        
        // Muestra linea
        cout<< cantidad<< line<< endl;
        
        // Separa las palabras split
        stringstream s(line);
    
    
        while(getline(s,word, ',')){
            // El while xtrae caracteres de s y los almacena en word hasta que encuentra el delimitador
            
            int iR=0;
            row[iR++]= word;
        }
        
        arrPtrPeliculas[cantidad] = new Pelicula(row[0], row[1], stoi(row[2]), row[3], stod(row[4]), stoi(row[5]));
            
        //Se muestra en consola la separacion
        cout << "iD" << row[0] << "\n";
        cout << "Titulo" << row[1] << "\n";
        cout << "Duracion" << row[2] << "\n";
        cout << "Genero" << row[3] << "\n";
        cout << "Calificacion" << row[4] << "\n";
        cout << "Oscares" << row[5] << "\n" ;
        
        //Desplegamos en consola la pelicula con el metodo str() de Peli
        cout << "Dentro del objeto:" << arrPtrPeliculas[cantidad]->str()<<endl;
        
        //incrementar el atributo cantidad para la siguiente pelicula
        cantidad= cantidad + 1;
    }
    
    fin.close();
        
        //Sale de ciclo cuando ya no existen mas lineas en el archivo
        
        //Desplegar todas las Peliculas leidas
        for(int iR=0; iR<cantidad;iR++){
            cout << iR << "*" << arrPtrPeliculas[iR]->str() << endl;
        }
    
}


    // Métodos modificadores (sets)
    void Peliculas::setPtrPelicula(Pelicula * _ptrPelicula){
        if (cantidad<50){
            arrPtrPeliculas[cantidad++]= _ptrPelicula;
        }
    }

    void Peliculas::setCantidadPeliculas(int _cantidad){
        cantidad= _cantidad + 1;
    }

    // Métodos de acceso (gets)
    Peliculas * Peliculas::getPtrPelicula(string _id){
       return new Peliculas;
    }

    int Peliculas::getCantidadPeliculas(){
        return cantidad;
    }
  
    // Métodos adicionales
    void Peliculas::reporteTodasLasPeliculas()
    {
        double promedio, acum;
        for(int iR = 0; iR < cantidad; iR++)
        {
        cout << "P" << arrPtrPeliculas[iR]->str() << endl;
        acum = acum + arrPtrPeliculas[iR]->getCalificacion();
        }
        promedio = acum / 35;
        cout << "Promedio: " << promedio << endl;

    }
    void Peliculas::reporteConCalificacion(double _calificacionPromedio){
        int count=0;
        int cantidad=0;
        for (int iR=0; iR < cantidad; iR++){
            if (arrPtrPeliculas[iR]-> getCalificacion()==_calificacionPromedio){
                cout<< iR<< ' ' << arrPtrPeliculas[iR]->str()<<endl;
                count++;
            }
        }
        if (count==0){
        cout<<"No hay peliculas de la calificacion deseada: "<< _calificacionPromedio <<endl;
        }
    }

    void Peliculas::reporteGenero(string _genero){
        int count=0;
        int cantidad=0;
        
        for (int iR=0; iR < cantidad; iR++){
            
            if (arrPtrPeliculas[iR]-> getGenero()== _genero)
            {
                cout<< iR<< ' ' << arrPtrPeliculas[iR]->str()<<endl;
                count++;
            }
        }
        
        if (count==0)
        cout<<"No hay peliculas del genero: " << _genero <<endl;
    }

