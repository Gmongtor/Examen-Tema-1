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
int main() {
    Estudiante estudiante1;
    string nombre;
    int edad;
    string carrera;
    cout << "Ingrese el nombre del estudiante: ";
    getline(cin, nombre);
    cout << "Ingrese la edad del estudiante: ";
    cin >> edad;
    cin.ignore();
    cout << "Ingrese la carrera del estudiante: ";
    getline(cin, carrera);
    estudiante1.Establecer_Datos(nombre, edad, carrera);
    estudiante1.Mostrar_Datos();
    return 0;