#include <iostream>

using namespace std;

int main() {
    char repeat; // variable tipo char para guardar las respuestas de x bebes 

    do { // ciclo do while
        float babyWeight, babyMonths, doseVaccine;

        cout << "Enter the baby's weight in Kg: ";
        cin >> babyWeight;
    
        cout << "Enter the baby's age in months: ";
        cin >> babyMonths;

        doseVaccine = (babyWeight + 10) / (babyMonths * 10) * 8;

        cout << "The baby's vaccine dose is: " << doseVaccine << endl;

        cout << "Do you want to enter information for another baby? (y/n): ";
        cin >> repeat;

    } while (repeat == 'y' || repeat == 'Y'); // se le pregunta al ussuario que si quiere ingresar nuebvos datos de otro bebe, si decide que si, este codigo se repite pero si decide que no, se le muestra un mensaje de finalizacion

    cout << "End." << endl;

    return 0;
}
