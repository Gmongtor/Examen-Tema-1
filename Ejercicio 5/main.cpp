#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Estudiante {
private:
    string nombre;
    int edad;
    string carrera;
    vector<string> materias;
public:
    Estudiante (string nombre, int edad, string carrera){
        this->nombre = nombre;
        this->edad = edad;
        this->carrera = carrera;
    }
    void Registrar_Materia(const string& materia){
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
    Estudiante estudiante1(nombre, edad, carrera);
    estudiante1.Registrar_Materia("Matematicas");
    estudiante1.Registrar_Materia("Programacion");
    estudiante1.Registrar_Materia("Fisica");
    estudiante1.Registrar_Materia("Ingles");
    estudiante1.Registrar_Materia("Informatica");
    estudiante1.mostrar_info();
    estudiante1.mostrar_materias();
    return 0;
}