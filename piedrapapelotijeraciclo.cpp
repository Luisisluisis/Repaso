#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<string> opciones = {"Rock", "Paper", "Scissors"}; // opciones del juego

    char playAgain;
// voy a usar un do while para que se repita siempre y cuando el usuario quiera volver a jugar ya sea y o Y
    do {
        int eleccion;
        cout << "Choose an option (0: Rock, 1: Paper, 2: Scissors): ";
        cin >> eleccion;

        int maquinaEleccion = (eleccion + 1) % 3;

        cout << "You: " << opciones[eleccion] << endl;
        cout << "Machine: " << opciones[maquinaEleccion] << endl;

        if (eleccion == maquinaEleccion) {
            cout << "Tie!" << endl;
        } else if ((eleccion + 1) % 3 == maquinaEleccion) {
            cout << "You win!" << endl;
        } else {
            cout << "You lose!" << endl;
        }

        cout << "Do you want to play again? (y/n): "; // pregunto que si quiere volver a jugar si decide que si, se repite
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thanks for playing!" << endl;

    return 0;
}
