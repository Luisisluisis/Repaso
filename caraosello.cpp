#include <iostream>
#include <random>
#include <ctime>

using namespace std;

int main() {
    default_random_engine generator(time(0));
    uniform_int_distribution<int> distribution(1, 2);

    int eleccion;
    char res;

    cout << "Choose one: [1] Cara [2] Sello" << endl;
    cin >> eleccion;

    if (eleccion < 1 || eleccion > 2) {
        cout << "Error, try again." << endl;
        return 0;
    }

    if (distribution(generator) == 1) {
        res = (eleccion == 1) ? 'S' : 'C';
    } else {
        res = (eleccion == 1) ? 'C' : 'S';
    }

    cout << "It is: " << res << endl;

    return 0;
}
