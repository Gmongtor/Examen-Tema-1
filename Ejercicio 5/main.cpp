#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Estudiante {
private:
    string nombre;
    int edad;
    string carrera;
public:
    Estudiante (string nombre, int edad, string carrera){
        this->nombre = nombre;
        this->edad = edad;
        this->carrera = carrera;
    }
    void Registrar_Materia(const string& materia){
        cout << "El estudiante " << nombre << " se ha registrado en la materia " << materia << endl;
        materias.push_back(materia);
    }
    void mostrar_materias() {
        cout << "El estudiante " << nombre << " esta inscrito en las siguientes materias: " << endl;
        for (const string &materia: materias) {
            cout << materia << endl;
        }
    }
    void mostrar_info(){
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "Carrera: " << carrera << endl;
    }
};
int main() {
    Estudiante estudiante1("Sebastian", 18, "Ingenieria Informatica + ADE");
    estudiante1.Registrar_Materia("Matematicas");
    estudiante1.Registrar_Materia("Programacion");
    estudiante1.Registrar_Materia("Fisica");
    estudiante1.Registrar_Materia("Ingles");
    estudiante1.Registrar_Materia("Informatica");
    estudiante1.mostrar_info();
    estudiante1.mostrar_materias();
    return 0;
}