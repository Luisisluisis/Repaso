#include <iostream>

using namespace std;

int main() {
    float babyWeight, babyMonths, doseVaccine;

    cout << "Enter the baby's weight in Kg: ";
    cin >> babyWeight;
    
    cout << "Enter the baby's age in months: ";
    cin >> babyMonths;

    doseVaccine = (babyWeight + 10) / (babyMonths * 10) * 8;

    cout << "The baby's vaccine dose is: " << doseVaccine;

    return 0;
}
