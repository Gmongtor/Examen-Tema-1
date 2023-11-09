#include <iostream>
#include <stdexcept>
using namespace std;
void RegistrarEdad(int edad){
    cout << "Ingrese su edad: ";
    cin >> edad;
    if (edad < 0) {
        throw invalid_argument("La edad no puede ser negativa");
    } else {
        cout << "Edad registrada correctamente" << endl;
    }
};
int main() {
    int edad;
    cout << "Bienvenido al sistema de registro de edades" << endl;
    try {
        RegistrarEdad(edad);
    } catch (invalid_argument& e) {
        cout << "Error: \n" << e.what() << endl;
    }
    return 0;
}
