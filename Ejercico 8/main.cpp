#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Estudiante {
private:
    string nombre;
    int edad;
    string carrera;
public:
    Estudiante(string nombre, int edad, string carrera){
        this->nombre = nombre;
        this->edad = edad;
        this->carrera = carrera;
    }
    void mostrar_info(){
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "Carrera: " << carrera << endl;
    }
};
vector<Estudiante> filtrar_por_grados