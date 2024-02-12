#include <iostream>
#include <random>
#include <ctime>

using namespace std;

int main() {
    default_random_engine generator(time(0));
    uniform_int_distribution<int> distribution(1, 2);

    char playAgain;

    do { //ciclo do while
        int eleccion;
        char result;

        cout << "Choose one: [1] Cara [2] Sello" << endl;
        cin >> eleccion;

        if (eleccion < 1 || eleccion > 2) {
            cout << "Error, try again." << endl;
            return 0;
        }

        result = (distribution(generator) == 1) ? (eleccion == 1 ? 'S' : 'C') : (eleccion == 1 ? 'H' : 'T');

        cout << "It is: " << result << endl;

        cout << "Do you want to roll the coin again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y'); //todo se repite si el usuario quietre seguir jugando pero si no, el programa se acaba y muestra el ultimo mensaje de que se acabo el juego

    cout << "End of game!" << endl;

    return 0;
}
