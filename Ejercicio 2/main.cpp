#include <iostream>
#include <string>
using namespace std;
class Estudiante {
private:
    string nombre;
    int edad;
    string carrera;
public:
    Estudiante(){
        nombre = " ";
        edad = 0;
        carrera = " ";
    }
void Establecer_Datos(string nombre, int edad, string carrera){
    this->nombre = nombre;
    this->edad = edad;
    this->carrera = carrera;
}
void Mostrar_Datos(){
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "Carrera: " << carrera << endl;
}
};
