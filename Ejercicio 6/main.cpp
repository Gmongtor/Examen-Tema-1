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
