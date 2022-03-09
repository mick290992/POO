// POO.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
using namespace std;



class Persona {
private:
    string nombre;
    int edad;
public:
    Persona(string, int);
    virtual void mostrar();

};

Persona::Persona(string _nombre, int _edad) {
    nombre = _nombre;
    edad = _edad;
};

void Persona::mostrar() {
   cout << "Nombre: " << nombre << endl;
   cout << "Edad: " << edad << endl;

};

class Alumno : public Persona {
private:
    float calificacion;
public:
    Alumno(string, int, float);
    void mostrar();
};

Alumno::Alumno(string _nombre, int _edad, float _calificacion) :Persona(_nombre, _edad) {
    calificacion = _calificacion;
};

void Alumno::mostrar() {
    Persona::mostrar();
    cout << "Calificacion: " << calificacion << endl;

};

class Profesor : public Persona {
private:
    string materia;
public:
    Profesor(string, int, string);
    void mostrar();
};

Profesor::Profesor(string _nombre, int _edad, string _materia) : Persona(_nombre, _edad) {
     materia = _materia;
};

void Profesor::mostrar() {
    Persona::mostrar();
    cout << "Materia: " << materia << endl;
};

int main()
{
    Persona* arreglo[3];

    arreglo[0] = new Alumno("Alejandro", 20, 7.8);

    arreglo[0]->mostrar();

    system("pause");
    return 0;
}