#include <iostream>
#include "funciones.h"
using namespace std;
int suma (int a, int b){
    return a+b;
}
int resta (int a, int b){
    return a-b;
}
int main() {
    int a, b;
    cout << "Ingrese dos numeros: ";
    cin >> a >> b;
    cout << "La suma de " << a << " y " << b << " es " << suma(a,b) << endl;
    cout << "La resta de " << a << " y " << b << " es " << resta(a,b) << endl;
    return 0;
}