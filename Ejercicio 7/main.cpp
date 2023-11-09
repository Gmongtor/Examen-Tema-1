#include <iostream>
#include <string>
using namespace std;
enum EstadoAsistencia {ASISTIO, NO_ASISTIO, TARDE};
string estado_asistencia(EstadoAsistencia estado){
    switch (estado){
        case ASISTIO:
            return "Asistio";
        case NO_ASISTIO:
            return "No asistio";
        case TARDE:
            return "Tarde";
    }
}
class Asistencia {
private:
    string nombre;
    string fecha;
    EstadoAsistencia estado;
public:
    Asistencia(string nombre, string fecha, EstadoAsistencia estado){
        this->nombre = nombre;
        this->fecha = fecha;
        this->estado = estado;
    }
    void mostrar_asistencia(){
        cout << "Nombre: " << nombre << endl;
        cout << "Fecha: " << fecha << endl;
        cout << "Estado: " << estado_asistencia(estado) << endl;
    }
};
