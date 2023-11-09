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
