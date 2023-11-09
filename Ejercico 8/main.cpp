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
vector<Estudiante> filtrar_por_grados(const vector<Estudiante>& estudiantes, const string &carrera){
    vector<Estudiante> estudiantes_filtrados;
    for (const Estudiante &estudiante: estudiantes){
        if (estudiante.carrera == carrera){
            estudiantes_filtrados.push_back(estudiante);
        }
    }
    return estudiantes_filtrados;
}
int main(){
    vector <Estudiante> todos_estudiantes = {
            Estudiante("Juan", 20, "Ing. Sistemas"),
            Estudiante("Maria", 19, "Ing. Matematicas"),
            Estudiante("Pedro", 21, "Ing. Fisica"),
            Estudiante("Luis", 20, "Ing. Informatica"),
            Estudiante("Ana", 19, "Ing. Sistemas"),
            Estudiante("Carlos", 21, "Ing. Sistemas"),
    };
    string carrera = "Ing. Sistemas";
    vector <Estudiante> estudiantes_filtrados = filtrar_por_grados(todos_estudiantes, carrera);
cout << "Estudiantes de la carrera " << carrera << endl;
    for (const Estudiante &estudiante: estudiantes_filtrados){
        estudiante.mostrar_info();
    }
    return 0;
}