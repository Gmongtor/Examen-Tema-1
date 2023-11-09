#include <iostream>
using namespace std;
void swap(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}
int main() {
    int a, b;
    cout << "Ingrese dos numeros: ";
    cin >> a >> b;
    cout << "Antes del intercambio: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    swap(&a, &b);
    cout << "Despues del intercambio: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}