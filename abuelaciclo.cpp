#include <iostream>

using namespace std;

int main() {
    char repeat; // repeat va a ser una variable que utilizare para guardar las temperaturas que el usuario haya digitado

    do {
        float temp, res;

        cout << "Give me the temperature in Fahrenheit: ";
        cin >> temp;

        res = (temp - 32) / 1.8;

        cout << "The temperature in Celsius is: " << res << endl;

        cout << "Do you want to convert another temperature? (y/n): ";
        cin >> repeat;

    } while (repeat == 'y' || repeat == 'Y'); // si el usuario quiere seguir convirtiendo las temperaturas se va a repetir el codigo, si no, se acaba el convertidor 

    cout << "End of convertions" << endl; // como ultimo mensaje de salida hacia el usuario se le dice que el programa finalizo

    return 0;
}
