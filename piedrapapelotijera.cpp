#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<string> opciones = {"Rock", "Paper", "Scissors"};

    int eleccion;
    cout << "Choose an option (0: Rock, 1: Paper, 2: Scissors): ";
    cin >> eleccion;

    int maquinaEleccion = (eleccion + 1) % 3;

    cout << "I: " << opciones[eleccion] << endl;
    cout << "Machine: " << opciones[maquinaEleccion] << endl;

    if (eleccion == maquinaEleccion) {
        cout << "Tie!" << endl;
    } else if ((eleccion + 1) % 3 == maquinaEleccion) {
        cout << "You win!" << endl;
    } else {
        cout << "You lose!" << endl;
    }

    return 0;
}
