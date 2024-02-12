#include <iostream>
#include <random>
#include <ctime>

using namespace std;

int main() {
    defaultRandomEngine generator (time(0)); // es un generador de numeros aleatorios usando la hora
    uniformIntDistribution <int> distribution (1, 2); //genera valores entre 1 y 2

    int eleccion;
    char res;

    cout << "Choose one: [1] Cara [2] Sello" << endl;
    cin >> eleccion; // aca se guarda la opcion que tomo el usuario en la variable eleccion

    if (eleccion < 1 || eleccion > 2) {
        cout << "Error, try again." << endl;
        return 0; // si el usuario elige dentro del rango de 1 o 2 bien pero si no esta en ese rango se ejecuta error y el programa deja de ejecutar
    }

    if (distribution(generator) == 1) { // crea valor aleatorio
        res = (eleccion == 1) ? 'S' : 'C'; // s para sello y c para cara
    } else {
        res = (eleccion == 1) ? 'C' : 'S';
    }

    cout << "It is: " << res << endl; // mensaje de salida con resultado

    return 0;
}
