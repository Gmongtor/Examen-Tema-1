#include <iostream>
#include <vector>
using namespace std;
float calcular_promedio(const vector<float>& notas){
    float suma = 0;
    for (int i = 0; i < notas.size(); i++){
        suma += notas[i];
    }
    return suma / notas.size();
}
int main (){
    vector<float> notas;
    float nota;
    int cantidad_notas;
    cout << "Ingrese la cantidad de notas en este curso: ";
    cin >> cantidad_notas;
    for (int i = 0; i < cantidad_notas; i++){
        cout << "Ingrese la nota " << i+1 << ": ";
        cin >> nota;
        notas.push_back(nota);
    }
    cout << "El promedio de tus notas es: " << calcular_promedio(notas) << endl;
    return 0;
}
